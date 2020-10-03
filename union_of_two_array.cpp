#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include<map>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define setbits(x) __builtin_popcountll(x)
#define mod 1000000007
#define ps(x,y) fixed<<setprecision(y)<<x
#define ll long long int
using namespace std;
int main() {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
      ll t;
      cin>>t;
      while(t--)
      {
        int n,m;
        cin>>n>>m;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll b[m];
        for(ll i=0;i<m;i++) cin>>b[i];
        set<ll> s;
        for(ll i=0;i<n;i++)
        s.insert(a[i]);
        for(ll i=0;i<m;i++)
        s.insert(b[i]);
        cout<<s.size()<<endl;
      }
    return 0;
  }
