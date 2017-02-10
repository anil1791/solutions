#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[100000];
		cin>>s;
		char *a,*b;
		a=strstr(s,"010");
		b=strstr(s,"101");
		if((a!=NULL||b!=NULL)||((a!=NULL&&b!=NULL)))
		{
			cout<<"Good"<<endl;
		}
		else
		cout<<"Bad"<<endl;
	}
}
