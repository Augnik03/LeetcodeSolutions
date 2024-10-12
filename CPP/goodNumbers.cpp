/*
A digit string is good if the digits (0-indexed) at even indices are even and the digits at odd indices are prime (2, 3, 5, or 7).

For example, "2582" is good because the digits (2 and 8) at even positions are even and the digits (5 and 2) at odd positions are prime. However, "3245" is not good because 3 is at an even index but is not even.
Given an integer n, return the total number of good digit strings of length n. Since the answer may be large, return it modulo 109 + 7.

A digit string is a string consisting of digits 0 through 9 that may contain leading zeros.

 

Example 1:

Input: n = 1
Output: 5
Explanation: The good numbers of length 1 are "0", "2", "4", "6", "8".
*/

long long pow(long long m, long long n ){
        long long ans = 1;
        m %= mod;
        if(n == 0){
            return 1;
        }
        // if(n%2 == 0){
        //     ans = pow(m*m, n/2);
        //     ans%=mod;
        // }
        // else{
        //     ans = m*pow(m*m, (n-1)/2);
        //     ans%=mod;
        // }
        // return ans;
        while(n>0){
            if(n%2 == 1){
                ans = (ans *m) % mod;
            }
            m = (m*m)%mod;
            n = n/2;
        }
        return ans;
    }
    int countGoodNumbers(long long n) {
        long long odd;
        long long even;
        odd = n/2;
        even = n/2 + n%2;
        return(pow(5, even) * pow(4, odd) ) % mod;
    }