#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n){
    int ld, revNum{0};
    int temp;
    
    temp = n;
    while(n>0){
        ld = n % 10;
        revNum = (revNum *10) + ld;
        n = n/10;
    }
    if(temp == revNum){
        cout<<boolalpha;
        return true;
    }
    else{
        cout<<boolalpha;
        return false;
    }
   
    
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<isPalindrome(n);
    
}