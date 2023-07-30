import pandas as pd
from num2words import num2words
import re

file_path = 'Test_server_25072023 (1).xlsx'

df = pd.read_excel(file_path, sheet_name = 'Field')
df = df.loc[df['FIELD_NAME'].isin(['Amount', 'Amount in Words'])]

df

def clean_amount_no(inp_str):
    # print("Input Str -----------------> ", inp_str)
    if type(inp_str)== list:
        if len(inp_str) != 0:
            inp_str = inp_str[0]
        else:
            inp_str = ''
            return inp_str
    inp_str = inp_str.replace(" ","").replace("*","")
    # Remove unwanted OCR errors
    replace_words = ['1-', '1=', '/-1', '=00', '/-', '/2', '/-11']
    for replace_word in replace_words:
        if inp_str.endswith(replace_word):
            inp_str = inp_str[:-len(replace_word)]
            break
    # print("After Removing Special Cases", inp_str)
    inp_str = inp_str.rstrip("-.+:=")
    inp_str = inp_str.replace(".",",").replace(" ","").replace("=", ",").replace(":", ",").replace("-",",")
    # print("replaced ---> ", inp_str)
    clear_str = ""
    for chr in inp_str:
        if chr == '/':
            break
        clear_str = clear_str + chr
    try:
        if clear_str[-3] == ",":
            clear_list = list(clear_str)
            clear_list[-3] = '.'
            clear_str = ''.join(clear_list)
    except:
        clear_str = inp_str
    final_str = ""
    for chr in clear_str:
        if chr.isdigit() or chr == ".":
            final_str = final_str + chr
    final_list = list(final_str)
    if final_list[-2:] == '01':
        final_list = final_list.replace('01','0')
        final_str = ''.join(final_list)
    else:
        final_str = ''.join(final_list)
    # print("FINAL------", final_str)
    return final_str

keywords = [
    "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
    "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen",
    "eighteen", "nineteen", "ten", "twenty", "thirty", "forty", "fifty", "sixty",
    "seventy", "eighty", "ninety", "hundred", "thousand", "lakh", "crore"
]

def remove_last_word_not_in_keywords(sentence):
    words = sentence.split()
    if words[-1].lower() not in keywords:
        words.pop()
    return ' '.join(words)

# Test the function"
sentence = "Thirtyone Thousand One Hundred Eighty Ilupers"
new_sentence = remove_last_word_not_in_keywords(sentence)
print(new_sentence)

amount = dict()
amount_in_words = dict()
rmi_amount = dict()
confidence = dict()
ocr_confidence = dict()

for index, row in df.iterrows():
  fn = row['FIELD_NAME']
  fid = row['FILE_ID']

  if fn == 'Amount':
    amount[fid] = str(row['FIELD_VALUE'])
    rmi_amount[fid] = str(row['RMI_AMOUNT'])
    confidence[fid] = str(row['CONFIDENCE'])
    ocr_confidence[fid] = str(row['OCR_CONFIDENCE'])
  if fn == 'Amount in Words':
    amount_in_words[fid] = str(row['FIELD_VALUE'])

print(amount)
print(amount_in_words)
print(rmi_amount)
print(confidence)
print(ocr_confidence)

def remove_and_and_fix_spaces(input_string):
    # Split the input string into a list of words
    words = input_string.split()

    # Remove 'and' from the list of words
    words_without_and = [word for word in words if word.lower() != 'and']

    # Join the words back together with a single space between them
    result_string = ' '.join(words_without_and)

    return result_string

val_list = []

for key in rmi_amount:
  fid = key
  rmi_amt = rmi_amount[key]
  amt = amount[key]
  amt_words = amount_in_words[key]
  conf = confidence[key]
  ocr_conf = ocr_confidence[key]

  try:
    amt = clean_amount_no(amt)
  except:
    pass

  try:
    ref = num2words(float(amt), lang = 'en_IN')
  except:
    pass

  try:
    rmi_ref = num2words(float(rmi_amt), lang = 'en_IN')
  except:
    pass

  ref = ref.replace(',', '')
  ref = ref.replace('-', ' ')
  rmi_ref = rmi_ref.replace(',', '')
  rmi_ref = rmi_ref.replace('-', ' ')


  ref = remove_and_and_fix_spaces(ref) #Correct value of ocr amount
  rmi_ref = remove_and_and_fix_spaces(rmi_ref) #Correct value of the rmi amount
  amt_words_processed = remove_last_word_not_in_keywords(amt_words) #OCR value after removing unnecessary postfix
  temp_amt = amt_words_processed.replace(' ', '')
  temp_ref = rmi_ref.replace(' ', '')

  remark = "NO"

  if(amt_words_processed.lower() == rmi_ref.lower()):
    remark = "YES"
  elif(temp_amt.lower() == temp_ref.lower()):
    remark = "MID"

  try:
    if(remark == "YES" and float(amt) != float(rmi_amt)):
      remark = "MID"
  except:
    pass

  val_list.append([fid, amt, rmi_amt, amt_words, conf, ocr_conf, ref, rmi_ref, remark])

county = 0
countm = 0

for i in val_list:
  if(i[8] == 'YES'):
    county+=1
  if(i[8] == 'MID'):
    countm+=1

print(county, countm)

import re
sorted_list = sorted(val_list, key=lambda x: x[0])

# fid, amt, rmi_amt, amt_words, conf, ocr_conf, ref, rmi_ref
df = pd.DataFrame(sorted_list, columns=['FILE_ID', 'AMOUNT', 'RMI_AMOUNT' ,'AMOUNT_IN_WORDS', 'CONFIDENCE','OCR CONFIDENCE', 'REFERENCE STRING','RMI REFERENCE STRING', 'REMARK'])

df

output_file = 'Num to word.xlsx'
df.to_excel(output_file, index=False, engine='openpyxl')

from google.colab import files
files.download(output_file)