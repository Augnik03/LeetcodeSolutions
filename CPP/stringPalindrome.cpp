#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    if (s.length()<=1){
        return true;
    }
    int st=0, en=s.length()-1;
    while(st<en){
        while(st<en && !isalnum(s[st])){
            st++;
        }
        while(st<en && isalnum(s[en])){
            en--;
        }
        if(st<en && tolower(s[st]) != tolower(s[en])){
            return false;
        }
        st++;
        en--;
    }
    return true;

}


// bool palindrome(int i, string &s, int n){ for array of words, continuous words without space
//     if(i>=n/2){
//         return true;
//     }
//     if(s[i]!=s[n-i-1]){
//         return false;
//     }
//     return palindrome(i+1,s,n);
// }