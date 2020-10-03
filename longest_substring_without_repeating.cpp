#include<iostream>
#include<bits/stdc++.h>
#include<set>
using namespace std;
int main()
{
  string s;
  cin>>s;
  int mc=0;
  int i=0,j=0;
  int n=s.length();
  set<char> ch;
  while(i<n && j<n)
  {
    char c=s.at(j);
    if(ch.find(c) != ch.end())
    {
      ch.erase(c);
      i++;
    }
    else
    {
      ch.insert(c);
      j++;
      mc=max(mc,j-i);
    }
  }
  if(ch.size()<3)
  {
    cout<<-1<<endl;
  return 0;
  }
  else
  cout<<ch.size();
//  set<char>::iterator x;
//for(x=ch.begin();x!=ch.end();x++)
//cout<<*x;
  return 0;
}
