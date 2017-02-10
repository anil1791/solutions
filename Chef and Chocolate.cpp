#include<bits/stdc++.h>
using namespace std;
int divide(int n,int m)
{
	if(n<=1&&m<=1)
	return 0;
	if(n%2==0)
	return divide(n/2,m)+1;
	if(m%2==0)
	
	return divide(n,m/2)+1;
	if(n==1&&m%2==1)
	return divide(n,m/2)+divide(n,m-m/2)+1;
	if(n%2==1&&m==1)
	return divide(n/2,m)+divide(n-n/2,m)+1;
	if(n%2==1&&m%2==1&&m>1&&n>1)
	{
		if(n>=m)
		return divide(n/2,m)+divide(n-n/2,m)+1;
		else
		return divide(n,m/2)+divide(n,m-m/2)+1;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	
	int m,n;
	cin>>n>>m;
	int res=divide(n,m);
	//cout<<res<<endl;
	if(res%2==1)
	cout<<"Yes"<<endl;
	else
	cout<<"No"<<endl;
}
}
