#include <bits/stdc++.h>
#include <vector>
#include<bitset>
#include<string>
#include<sstream>
#include <algorithm>
#define pb push_back
#define s second
#define f first
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define mii map<int,int>
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
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++) cin>>a[i];
        ll ans=a[n-1];
        for(ll i=n-1;i>0;i--)
        a[i]=a[i-1];
        a[0]=ans;
        for(ll i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
      }
    return 0;
  }
