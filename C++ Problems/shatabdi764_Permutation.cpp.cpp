/*A permutation of integers 1,2,…,n is called beautiful if there are no adjacent elements whose difference is 1.

Given n, construct a beautiful permutation if such a permutation exists.

Input

The only input line contains an integer n.

Output

Print a beautiful permutation of integers 1,2,…,n. If there are several solutions, you may print any of them. If there are no solutions, print "NO SOLUTION".

Constraints
1≤n≤106
Example 1

Input:
5

Output:
4 2 5 3 1

Example 2

Input:
3

Output:
NO SOLUTION
//author: Shatabdi Choudhury
Profile: https://cses.fi/user/33759
link:https://cses.fi/problemset/task/1083
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
    vector<int> ans;
    if(n==3 || n==2)printf("%s","NO SOLUTION");
    else if(n==4)
    {
        cout<<"2 4 1 3";
    }
    else
    {
        int x=1;
        while(x<=n)
        {
            ans.push_back(x);
            x+=2;
        }
        x=2;
        while(x<=n)
        {
            ans.push_back(x);
            x+=2;
        }
        for(auto i:ans)
        cout<<i<<" "; 
    }
    

  }  
  return 0;
}

