#include<iostream>
#include<algorithm>
using namespace std;
int main()
 {
	int t;
	cin>>t;
	while(t--)
	{
	long int n,k;
	cin>>n>>k;
	long long int a[n];
	for(long int i=0;i<n;i++)
	cin>>a[i];
        for(int i=0 ; i<n; i++)
        {
            int min = a[i];
            int index = i,j; 
            for(j=i+1 ; j<=i+k && j<n ; j++)
            {
                if(a[j] < a[i])
                {
                    index = j;
                    min = a[j];
                }
            }
            swap(a[index],a[i]);
        }
        for(int i=0 ; i<n ; i++)
        cout << a[i] << " ";
        cout << endl;
	 }
	return 0;
}
