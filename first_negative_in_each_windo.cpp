#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    cin>>a[i];
    int k;
    cin>>k;
    int j=k;
    for(int i=0;i<n-k;i++)
    {
      while(k--)
      {
           if(a[i]<0)
           cout<<a[i]<<" ";
      }
    }

  }

}
