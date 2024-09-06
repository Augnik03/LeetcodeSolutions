#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ld, revNum{0};
    cout<<"Enter the number:";
    cin>>n;
    int temp;
    temp = n;
    while(n>0){
        ld = n % 10;
        revNum = (revNum *10) + ld;
        n = n/10;
    }
    if(temp == revNum){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}