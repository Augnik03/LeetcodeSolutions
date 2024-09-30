#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int revNum{0}, lstdigit;
    if(n<0){
        n = -1 * n;
        while(n > 0){
        lstdigit = n % 10;
        revNum = (revNum*10) + lstdigit;
        n = n/10;
        }
        revNum = -1 * revNum;
    }
    else{
        while(n > 0){
        lstdigit = n % 10;
        revNum = (revNum*10) + lstdigit;
        n = n/10;
        }
    }
    return revNum;
}

int main(){
    int n;
    cout<<"Enter the number:";
    cin>>n;
    cout<<reverse(n);
}