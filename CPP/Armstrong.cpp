#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, sum{0}, ld, temp;
    cout<< "Enter the number:";
    cin>>n;
    temp = n;
    while(n>0){
        ld = n % 10;
        sum = sum + (ld*ld*ld);
        n = n/10;
    }
    if(sum == temp){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}