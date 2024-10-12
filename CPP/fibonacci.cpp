#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{

    if (n <= 1)
    {
        return n;
    }

    int prev{0}, next{1}, curr;
    for (int i = 2; i <= n; i++)
    {
        curr = prev + next;
        prev = next;
        next = curr;
    }
    return curr;
}

int main()
{
    int n;
    cout << "Enter the number till which you want the fibonacci series for:";
    cin >> n;
    cout << "Fibonacci series is:" << fib(n);
}

/*
My Solution:

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