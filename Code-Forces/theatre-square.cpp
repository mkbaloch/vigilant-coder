//Problem:          Theatre Square
//Problem Link:     https://codeforces.com/problemset/problem/1/A

#include<bits/stdc++.h>
#define vi vector<int>
#define ll long long
#define pi pair<int, int>
#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i, a, b) for(int i=a; i<=b; i++)
#define repn(i, n) for(int i=0; i<(int)n; i++)

using namespace std;

int main()
{
    ll n, m, a;
    cin >> n >> m >> a;
    ll ans = ceil((double)n/a) * ceil((double)m/a);
    cout << ans << endl;

    return 0;
}
