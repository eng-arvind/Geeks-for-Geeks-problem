#include <bits/stdc++.h>
using namespace std;
int help(string s,int m[],int cnt)
{
      if(cnt==1)
      return 1;
      if(cnt==s.length())
      return s.length();
          int start=0,end=1;
          int arr[26]={0};
          arr[s[start]-'a']++;
          int c=1;
      if(arr[s[end]-'a']==0)
          c++;
          arr[s[end]-'a']++;
          end++;
          int len=0,maxlen=INT_MAX;
          while(1)
          {
                if(end==s.length())
                break;
                if(arr[s[end]-'a']==0)
                c++;
                arr[s[end]-'a']++;
          if(c==cnt)
          {
          while(arr[s[start]-'a']>1)
          {
          arr[s[start]-'a']--;
          start++;
          }
          len=end-start+1;
          maxlen=min(maxlen,len);
          }
        //  cout<<start-end;
          end++;
          }
return maxlen;
}
//cout<<start<<'_'<<end<<'-'; end++;="" }="" return="" maxlen;="" }="" int="" main()="" {="" code="" int="" t;="" cin="">>t;
int main()
{
int t;
cin>>t;
while(t--)

{
string s;
cin>>s;
int m[26]={0};
int cnt=0;
for(int i=0;i<s.length();i++)
 {
 int pos=s[i]-'a';
if(m[pos]==0)
{
  m[pos]=1;
   cnt++;
  }
 }
cout<<help(s,m,cnt)<<'\n';
}
 return 0;
  }
