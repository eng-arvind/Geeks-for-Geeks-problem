#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
 int main()
 {
   int t;
   cin>>t;
   while(t--)
   {
     int n,k;
     cin>>n>>k;
     int a[n];
     for(int i=0;i<n;i++)
     cin>>a[i];
     int *max=max_element(a,a+n);
     if(*max<=k)
     cout<<-1<<endl;
     else
     cout<<*max-k<<endl;
   }
   return 0;
 }
