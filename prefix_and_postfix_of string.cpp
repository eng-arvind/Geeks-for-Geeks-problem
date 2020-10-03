#include<bits/stdc++.h>
using namespace std;
int prefix_suffix(string str)
{
int n=str.length();
 int l = 0;
 int i=n/2;
 if(n<2)
 return 0;
 while(l<n)
 {
   if(str[i]==str[l])
   {
     i++;
     l++;
   }
   else
   {
     if(l==0)
     i++;
     else
     l--;
   }
 }
 return l;
}
int main()
{
  string s;
  cin>>s;
  cout<<prefix_suffix(s);
  return 0;
}
