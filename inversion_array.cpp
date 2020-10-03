#include <iostream>
#define ll long long int
using namespace std;
ll temp[10000000];
ll count;
void merge(ll a[],ll i_start,ll i_end,ll j_start,ll j_end){

ll i=i_start;
ll j=j_start;
ll k=0;

while(i<=i_end && j<=j_end){
if(a[i]<=a[j])
temp[k++]=a[i++];

else {
count+=i_end-i+1;
temp[k++]=a[j++];
}
}
while(i<=i_end)
temp[k++]=a[i++];

while(j<=j_end)
temp[k++]=a[j++];

k=0;
for(ll m=i_start;m<=j_end;m++)
a[m]=temp[k++];

}

void mergesort(ll a[],ll start,ll end){

if(start>=end)
return ;

ll mid=start+(end-start)/2;

mergesort(a,start,mid);
mergesort(a,mid+1,end);

merge(a,start,mid,mid+1,end);
}

int main() {
ll t; cin>>t;
while(t-->0){
ll n; cin>>n;
ll a[n];
for(ll i=0;i<n;i++) cin>>a[i];

count=0;
mergesort(a,0,n-1);

cout<<count;
 cout<<endl;
}
 return 0;
}
