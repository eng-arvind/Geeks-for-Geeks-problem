#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    //cin>>s;
    //  getline(cin,s);
      if(s.length()>2)
      {
        string x=s.substr(s.size()-3,3);
        int y;
        y=stoi(x);
	    if(y%8==0)
	    cout<<"1"<<endl;
	    else
	    cout<<"-1"<<endl;
    }
    else
    {
      if(stoi(s)%8==0)
      cout<<"1"<<endl;
      else
      cout<<"-1"<<endl;
    }
	}
	return 0;
}
