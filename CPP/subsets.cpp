/*
Given an integer array nums of unique elements, return all possible 
subsets
 (the power set).

The solution set must not contain duplicate subsets. Return the solution in any order.

 

Example 1:

Input: nums = [1,2,3]
Output: [[],[1],[2],[1,2],[3],[1,3],[2,3],[1,2,3]]
Example 2:

Input: nums = [0]
Output: [[],[0]]
*/

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums){
    int n = nums.size();
    vector<vector<int>> ans; //2D vector, Lists inside list [[], [a]]
    for(int i=0; i<(i<<n); i++){ //1<<2 gives 100 output which is binary value of 4 and 2^2 also gives 4 therefore 1<<n and pow(2,n) produces similar results
        vector<int> k;
        for(int j=0; j<n;j++){
            if((1<<j)&i){
                k.push_back(nums[j]);
            }
            ans.push_back(k);            
        }
    }
    return ans;
}