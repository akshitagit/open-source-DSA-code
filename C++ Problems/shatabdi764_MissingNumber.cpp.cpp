

/*
You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.
Input
The first input line contains an integer n.
The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).
Output
Print the missing number.
Constraints
2≤n≤2⋅105
Example
Input:
5
2 3 1 5
Output:
4
//author: Shatabdi Choudhury
Profile: https://cses.fi/user/33759
link:https://cses.fi/problemset/task/1083
*/


#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define MOD 1000000007
#define fi first
#define se second
#define rep(i,n) for(int i = 0 ; i < n ; i++)
#define repe(i,n) for(int i = 0 ; i <= n ; i++)
#define repb(i,a,b) for(int i = a ; i < b ; i++)
#define repeb(i,a,b) for(int i = a ; i <= b ; i++)
#define rfor(i,n,a) for(int i = n ; i >= a ; i--)
#define pb push_back
#define popb pop_back()
#define endl "\n"
#define pii pair<int,int> 
#define pll pair < long long, long long >
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL)
#define p0(a) cout << a << " "
#define p1(a) cout << a << endl
#define p2(a,b) cout << a << " " << b << endl
#define p3(a,b,c) cout << a << " " << b << " " << c << endl
#define p4(a,b,c,d) cout << a << " " << b << " " << c << " " << d << endl
#define sortv(v) sort(v.begin(),v.end())
#define rsortv(v) sort(v.begin(),v.end(), greater<>());
#define sortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop < rhs.prop; });
#define rsortby(v,prop) sort( v.begin( ), v.end( ), [ ]( const auto& lhs, const auto& rhs ){ return lhs.prop > rhs.prop; });

ll power(ll num,ll r){
    if(r==0) return 1;
    if(r==1) return num%MOD;
    ll ans=power(num,r/2)%MOD;
    if(r%2==0) {
        return (ans*ans)%MOD;
    } return (((ans*ans)%MOD)*num)%MOD;
}

/*-------------------------------------------------*/


int main()
{
    fastio;
    
    ll n, num, sum = 0;
    cin >> n;

    rep(i,n-1) {
        cin >> num;
        sum += num;
    }

    ll ans = (n*(n+1))/2 - sum;
    p1(ans);

    return 0;
}
