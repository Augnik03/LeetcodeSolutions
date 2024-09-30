#include <bits/stdc++.h>
using namespace std;


int F[10];
int fib(int n){
    
    if(n<=1){
        F[n] = n;
        return n;
    }
    else{
        if(F[n-2] == -1){
            F[n-2] = fib(n-2);
        }
        if(F[n-1] == -1){
            F[n-1] = fib(n-1);
        }
        return F[n-2]+F[n-1];
    }
    
}

int main(){
    for(int i=0; i<10; i++){
        F[i] = -1;
    }
    int n;
    cout<<"Enter the number till which you want the fibonacci series for:";
    cin>>n;
    cout<<"Fibonacci series is:"<<fib(n);
}



/*
Leetcode Solution:

int fib(int n) {
        int F[n+1];
        for(int i=0; i<n+1; i++){
            F[i] = -1;
        }
        if(n<=1){
            F[n] = n;
            return n;
        }
        else{
            if(F[n-2] == -1){
                F[n-2] = fib(n-2);
            }
            
            if(F[n-1] == -1){
                F[n-1] = fib(n-1);
            }
            return F[n-2] + F[n-1];
        }
    }


*/