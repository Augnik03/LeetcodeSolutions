#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s){
    if (s.length()<=1){
        cout<<boolalpha;
        return true;
    }
    int st=0, en=s.length()-1;
    while(st<en){
        if(!isalnum(s[st])){
            st++;
        }
        else if(!isalnum(s[en])){
            en--;
        }
        if(tolower(s[st++]) != tolower(s[en--])){
            cout<<boolalpha;
            return false;
        }
    }
    cout<<boolalpha;
    return true;

}

int main(){
    string s;
    cout<<"Enter the string:";
    cin>>s;
    cout<<isPalindrome(s);
}