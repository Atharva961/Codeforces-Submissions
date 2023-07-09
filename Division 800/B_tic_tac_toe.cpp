#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    char v[3][3];

    while (t--)
    {
        cin >> v[0][0] >> v[0][1] >> v[0][2];
        cin >> v[1][0] >> v[1][1] >> v[1][2];
        cin >> v[2][0] >> v[2][1] >> v[2][2];

        bool isWinner = false;

        for (int i = 0; i < 3; i++)
        {
            if (v[i][0] == v[i][1] && v[i][1] == v[i][2] && v[i][0] != '.')
            {
                isWinner = true;
                break;
            }
        }

        for (int i = 0; i < 3; i++)
        {
            if (v[0][i] == v[1][i] && v[1][i] == v[2][i] && v[0][i] != '.')
            {
                isWinner = true;
                break;
            }
        }

        if ((v[0][0] == v[1][1] && v[1][1] == v[2][2] && v[0][0] != '.') ||
            (v[0][2] == v[1][1] && v[1][1] == v[2][0] && v[0][2] != '.'))
        {
            isWinner = true;
        }

        if (isWinner)
        {
            cout << "There is a winner!" << endl;
        }
        else
        {
            cout << "There is no winner." << endl;
        }
    }

    return 0;
}