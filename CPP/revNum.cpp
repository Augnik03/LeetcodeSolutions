#include <bits/stdc++.h>
using namespace std;
#define INT_MIN  (-INT_MAX-1)
#define INT_MAX  2147483647

int reverse(long long n)
{
    long long revNum{0}, lstdigit;
    while (abs(n) != 0)
    {
        lstdigit = n % 10;
        revNum = (revNum * 10) + lstdigit;
        if ((revNum < INT_MIN) || (revNum > INT_MAX))
        {
            return 0;
        }
        n = n / 10;
    }
    return revNum;
}

int main()
{
    long long n;
    cout << "Enter the number:";
    cin >> n;
    cout << reverse(n);
}


// My solution
//  int reverse(long long n)
//  {
//      long long revNum{0}, lstdigit;
//      if (n < 0)
//      {
//          n = -1 * n;
//          while (n != 0)
//          {
//              lstdigit = n % 10;
//              revNum = (revNum * 10) + lstdigit;
//              if (revNum < INT_MIN || revNum > INT_MAX)
//              {
//                  return 0;
//              }
//              n = n / 10;
//          }
//          revNum = -1 * revNum;
//      }
//      else
//      {
//          while (n > 0)
//          {
//              lstdigit = n % 10;
//              revNum = (revNum * 10) + lstdigit;
//              if (revNum < INT_MIN || revNum > INT_MAX)
//              {
//                  return 0;
//              }
//              n = n / 10;
//          }
//      }
//      return revNum;
//  }