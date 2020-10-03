#include<iostream>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n-1];
	    for(int i=0;i<n-1;i++) cin>>arr[i];
	    int sm=0;
	    for(int i=0;i<n-1;i++)
	    {
        sm+=arr[i];
      }
	    int tsm=(n*(n+1))/2;
	   cout<<tsm-sm<<endl;
	}
	return 0;
}
