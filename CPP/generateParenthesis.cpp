/*
Given n pairs of parentheses, write a function to generate all combinations of well-formed parentheses.

 

Example 1:

Input: n = 3
Output: ["((()))","(()())","(())()","()(())","()()()"]
Example 2:

Input: n = 1
Output: ["()"]
*/

void generateParentheses(int open, int close, int n, string curr, vector<string>& ans){
    if(open == n && close == n){
        ans.push_back(curr);
        return;
    }
    if(open<n){
        generateParentheses(open+1, close, n, curr + '(', ans);
    }
    if(close<open){
        generateParentheses(open, close+1, n, curr + ')', ans);
    }
}

vector<string> generateParenthesis(int n) {
        vector<string> result;
        generateParentheses(0, 0, n, "", result);
        return result;
    }