#include<iostream>
using namespace std;
int main()
{
	int a[2][6];
	int e1=2,e2=4;
	int i,j;
	cout<<"Enter the values of 1st and 2nd assembly line"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<6;j++)
		cin>>a[i][j];
	}
	int t[2][5];
	cout<<"Enter the switching time matrix"<<endl;
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		cin>>t[i][j];
	}
	int f[2][6];
	f[0][0]=e1+a[0][0];
	f[1][0]=e2+a[1][0];
	int x1=3,x2=2,l1,f1;
	int l[2][5];
	for(j=1;j<6;j++)
	{
		if((f[0][j-1]+a[0][j])<(f[1][j-1]+t[1][j-1]+a[0][j]))
		{
			f[0][j]=f[0][j-1]+a[0][j];
			l[0][j]=1;
		}
		else
		{
			f[0][j]=f[1][j-1]+a[0][j]+t[1][j-1];
			l[0][j]=2;
		}
		if((f[1][j-1]+a[1][j])<(f[0][j-1]+t[0][j-1]+a[1][j]))
		{
			f[1][j]=f[1][j-1]+a[1][j];
			l[1][j]=2;
		}
		else
		{
			f[1][j]=f[0][j-1]+a[1][j]+t[0][j-1];
			l[1][j]=1;
		}
	}
	
		if((f[0][5]+x1)<(f[1][5]+x2))
		{
			f1=f[0][5]+x1;
			l1=1;
		}
		else
		{
			f1=f[1][5]+x2;
			l1=2;
		}
		
		cout<<"f* = "<<f1<<endl;
		cout<<"l* = "<<l1<<endl;
		
		i=l1-1;
		cout<<"line "<<i+1<<" station "<<6<<endl;
		for(j=5;j>=1;j--)
		{
			i=l[i][j]-1;
			cout<<"line "<<i+1<<" station "<<j<<endl;
		}/*
		for(i=0;i<2;i++)
		{
			for(j=0;j<6;j++)
			cout<<l[i][j]<<" ";
			cout<<endl;
		}*/
}
