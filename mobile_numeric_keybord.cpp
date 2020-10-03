#include<iostream>
using namespace std;
string call(char c)
{
    if(c=='A')
    return "21";
    if(c=='B')
    return "22";
    if(c=='C')
    return "23";
    if(c=='D')
    return "31";
    if(c=='E')
    return "32";
    if(c=='F')
    return "33";
    if(c=='G')
    return "41";
    if(c=='H')
    return "42";
    if(c=='I')
    return "43";
    if(c=='J')
    return "51";
    if(c=='K')
    return "52";
    if(c=='L')
    return "53";
    if(c=='M')
    return "61";
    if(c=='N')
    return "62";
    if(c=='O')
    return "63";
    if(c=='P')
    return "71";
    if(c=='Q')
    return "72";
    if(c=='R')
    return "73";
    if(c=='S')
    return "74";
    if(c=='T')
    return "81";
    if(c=='U')
    return "82";
    if(c=='V')
    return "83";
    if(c=='W')
    return "91";
    if(c=='X')
    return "92";
    if(c=='Y')
    return "93";
    if(c=='Z')
    return "94";
    if(c==' ')
    return "01";

}
int main()
 {
	//code
	int t;
	cin>>t;
  cin.ignore();
	while(t--)
	{
	    string s;
	    getline(cin,s);
	    for(int i=0;i<s.length();i++)
	    {
	        string n=call(s[i]);
	        for(int i=0;i<n[1]-'0';i++)
	        cout<<n[0];
	    }
      cout<<"\n";
	}
	return 0;
}
