#include <bits/stdc++.h>
using namespace std;

double pow(double m, int n){
    double ans;
    if(n == 0){
        return 1;
    }
    if(n>0){
        if(n%2 == 0){
            ans = pow(m*m, n/2);
        }
        else{
            ans = m * pow(m*m, (n-1)/2);
        }
    }
    if(n<0){
        n = -1 * n;
        if(n%2 == 0){
            ans = 1 / pow(m*m, n/2);
        }
        else{
            ans = 1 / m * pow(m*m, (n-1)/2);
        }
    }
    return ans;

}

int main(){
    int N, M;
    cout<<"Enter the number and the exponent:";
    cin>>M>>N;
    cout<<"The answer is:"<<pow(M,N);
}