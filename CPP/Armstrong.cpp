//LEETCODE PREMIUM

#include <bits/stdc++.h>
using namespace std;

bool armstrong(int n){
    int sum{0}, ld, temp;
    temp = n;
    while(n>0){
        ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(sum == temp){
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
    cout<< "Enter the number:";
    cin>>n;
    cout<<armstrong(n);
}