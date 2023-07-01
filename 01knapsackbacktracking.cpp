#include <iostream>
#include <vector>

using namespace std;

void knapsack_01_backtracking(const vector<int> &values, const vector<int> &weights, int max_weight, int index, int curr_weight, int curr_value, vector<int> &solution, int &best_value, vector<int> &best_solution)
{
    if (curr_weight > max_weight)
    {
        return;
    }

    if (curr_value > best_value)
    {
        best_value = curr_value;
        best_solution = solution;
    }

    if (index >= values.size())
    {
        return;
    }

    // Try including the current item
    solution.push_back(index);
    knapsack_01_backtracking(values, weights, max_weight, index + 1, curr_weight + weights[index], curr_value + values[index], solution, best_value, best_solution);
    solution.pop_back();

    // Try excluding the current item
    knapsack_01_backtracking(values, weights, max_weight, index + 1, curr_weight, curr_value, solution, best_value, best_solution);
}

pair<int, vector<int>> knapsack_01(const vector<int> &values, const vector<int> &weights, int max_weight)
{
    int num_items = values.size();
    int best_value = 0;
    vector<int> best_solution;

    vector<int> solution;
    knapsack_01_backtracking(values, weights, max_weight, 0, 0, 0, solution, best_value, best_solution);

    return make_pair(best_value, best_solution);
}

int main()
{
    vector<int> values = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int max_weight = 50;

    pair<int, vector<int>> result = knapsack_01(values, weights, max_weight);
    int max_value = result.first;
    vector<int> included_items = result.second;

    cout << "Maximum value: " << max_value << endl;
    cout << "Included items: ";
    for (int item : included_items)
    {
        cout << item << " ";
    }
    cout << endl;

    return 0;
}
