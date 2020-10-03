#include<algorithm>
#include<vector>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k;
	    cin>>n>>k;
	   vector <int> a(n);
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    sort(a.begin(),a.end());
	   int count=0;
    while(k>0){
        k=k-a[count];
        if(k>0)
        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
