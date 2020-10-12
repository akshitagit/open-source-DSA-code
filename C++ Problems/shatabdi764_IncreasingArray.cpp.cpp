

/*You are given an array of n integers. You want to modify the array so that it is increasing, i.e., every element is at least as large as the previous element.

On each turn, you may increase the value of any element by one. What is the minimum number of turns required?

Input

The first input line contains an integer n: the size of the array.

Then, the second line contains n integers x1,x2,…,xn: the contents of the array.

Output

Print the minimum number of turns.

Constraints
1≤n≤2⋅105
1≤xi≤109
Example

Input:
5
3 2 5 1 7

Output:
5
// Shatabdi Choudhury
//cses.fi/ShatabdiChoudhury
//https://cses.fi/problemset/task/1094

*/

#include <bits/stdc++.h>
#include <iostream>
#include <sstream>
#include <cstdio>
#include <cmath>
#include <cstring>
#include <cctype>
#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>
#include <functional>
using namespace std; 
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define REP(i,n) for(int i=0;i<(n);i++)
#define FOR(i,a,b) for(int i=(a);i<=(b);i++)
#define FORD(i,a,b) for(int i=(a);i>=(b);i--)
inline bool EQ(double a, double b) { return fabs(a-b) < 1e-9; }
const int INF = 1<<29;
typedef long long int ll;
inline int two(int n) { return 1 << n; }
inline int test(int n, int b) { return (n>>b)&1; }
inline void set_bit(int & n, int b) { n |= two(b); }
inline void unset_bit(int & n, int b) { n &= ~two(b); }
inline int last_bit(int n) { return n & (-n); }
inline int ones(int n) { int res = 0; while(n && ++res) n-=n&(-n); return res; }
template<class T> void chmax(T & a, const T & b) { a = max(a, b); }
template<class T> void chmin(T & a, const T & b) { a = min(a, b); }
const int MOD=1000000007;

bool isPowerOfTwo (ll x)  
{  
    return x && (!(x&(x-1)));  
}
bool isPrime(int n) 
{ 
    if (n <= 1)  return false; 
    if (n <= 3)  return true; 
    if (n%2 == 0 || n%3 == 0) return false; 
  
    for (int i=5; i*i<=n; i=i+6) 
        if (n%i == 0 || n%(i+2) == 0) 
           return false; 
  
    return true; 
}
int highestPowerof2(unsigned int n) 
{ 
    // Invalid input 
    if (n < 1) 
        return 0; 
  
    int res = 1;
    for (int i=0; i<8*sizeof(unsigned int); i++) 
    { 
        int curr = 1 << i; 
        if (curr > n) 
           break; 
  
        res = curr; 
    } 
  
    return res; 
} 
long long binpow(long long a, long long b) {
    long long res = 1;
    while (b > 0) {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}       
////////////////////////////////////////////////////////////////////

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);  
  cout.tie(NULL);
  int t=1;
  while(t--)
  {
    ll n;
    cin>>n;
    ll a[n];
    REP(i,n)cin>>a[i];
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(a[i+1]>=a[i])continue;
        else
        {
            ans+=a[i]-a[i+1];
            a[i+1]=a[i];
        }
        
    }
    printf("%lld",ans);
  }  
  return 0;
}

/* Profile: https://cses.fi/user/33759
author: shatabdi764 */