#include <bits/stdc++.h>
using namespace std;

int main(){
    int revNum{0}, n, lstdigit;
    cout<<"Enter the number:";
    cin>>n;
    while(n > 0){
        lstdigit = n % 10;
        revNum = (revNum*10) + lstdigit;
        n = n/10;
    } 
    cout<<revNum;
}