#include<iostream>
#include<set>
#include<unordered_map>
#include<map>
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
	    for(int i=0;i<n;i++) cin>>a[i];
	    int cnt=0;
	   unordered_map<int,int> st;
      for(int i=0;i<n;i++)
      st[a[i]]++;
      // cout<<a[i]<<" ";
      // cout<<endl;
	    for(int i=0;i<n;i++)
	    {
        cnt+=st[k-a[i]];
        if(k-a[i]==a[i])
        cnt--;
	    }

      // for(auto i:st)
      // cout<<i<<" ";
      // cout<<endl;
	    cout<<cnt/2<<endl;
	}
	return 0;
}
