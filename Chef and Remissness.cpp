#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,min;
		cin>>a>>b;
		min=a>b?a:b;
		cout<<min<<" "<<a+b<<endl;
	}
}
