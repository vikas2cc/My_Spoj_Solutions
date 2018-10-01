# My_Spoj_Solutions
#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

string tostr(char c)
{
	string s(1,c);
	return s;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		string a,b;
		cin>>a>>b;
		int la,lb;
		la=a.length();
		lb=b.length();
		int n;
		if(la>lb)
		{
			n=la-lb;
			string s="";
			while(n--)
			{
				b=b+tostr('0');
			}
		}
		else if(lb>la)
		{
			n=lb-la;
			string s="";
			while(n--)
			{
				a=a+tostr('0');
			}
		}
		
		//cout<<a<<" "<<b<<"\n";
		reverse(a.begin(),a.end());
		reverse(b.begin(),b.end());
		int num1=stoi(a);
		int num2=stoi(b);
		int s=num1+num2;
		string h= to_string(s);
		reverse(h.begin(),h.end());
		//cout<<num1<<" "<<num2<<"\n";
		cout<<stoi(h)<<"\n";
	}
	return 0;
}
