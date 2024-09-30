//Leetcode HARD

#include <bits/stdc++.h>
using namespace std;

int sti(string s){
    int i{0}, sign{0}, result{0};
    while(i<s.length() && s[i] ==' '){
        i++;
    }
    if(s[i] == '-'){
        sign = 1;
        i++;
    }
    else if(s[i] == '+'){
        i++;
    }
    while(s[i]>='0' && s[i]<='9'){
        result = result*10;
        if(result<=INT_MIN || result>=INT_MAX) break;
        result = result + (s[i] - '0');
        i++;
    }
    if(sign == 1){
        result = -1 * result;
    }
    if(result<=INT_MIN) return INT_MIN;
    if(result>=INT_MAX) return INT_MAX;
    return result;
}

int main(){
    string s;
    cout<<"Enter the string to be checked:";
    cin>>s;
    cout<<sti(s);
}