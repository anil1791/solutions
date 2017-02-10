#include<bits/stdc++.h>
using namespace std;
int s(int x)
{
	int sum=0;
	while(x>0)
	{
		sum+=x%10;
		x/=10;
	}
	return sum;
}
int main()
{
	int n;
	cin>>n;
	int i,count=0;
	//i=n-60;
	//if(i<=0)
	i=n-1000;
	
	for(;i<n;i++)
	{
		if((i+s(i)+s(s(i)))==n){
			
			//cout<<i<<endl;
			count++;
			
		}
	}
	cout<<count<<endl;
}

