/*
Given a collection of candidate numbers (candidates) and a target number (target), find all unique combinations in candidates where the candidate numbers sum to target.

Each number in candidates may only be used once in the combination.

Note: The solution set must not contain duplicate combinations.



Example 1:

Input: candidates = [10,1,2,7,6,1,5], target = 8
Output:
[
[1,1,6],
[1,2,5],
[1,7],
[2,6]
]
Example 2:

Input: candidates = [2,5,2,1,2], target = 5
Output:
[
[1,2,2],
[5]
]
*/

void combination(int index, int key, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
{
    if (key == 0)
    {
        ans.push_back(ds);
        return;
    }
    for (int i = index; i < arr.size(); i++)
    {
        if (i > index && arr[i] == arr[i - 1])
            continue;
        if (arr[i] > key)
            break;
        ds.push_back(arr[i]);
        combination(i + 1, key - arr[i], arr, ans, ds);
        ds.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
{
    sort(candidates.begin(), candidates.end());
    vector<vector<int>> ans;
    vector<int> ds;
    combination(0, target, candidates, ans, ds);
    return ans;
}

