#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

int primes[100000];  
bool flag[10000000]= {false};
void sieve()
{
	int k=0;
	  		
	int i,j;
	for(i=2;i*i<=1000000000;i++)
	{
		if(flag[i]==false)
		primes[k++]=i;
		if(flag[i]==true )
		continue;
		for(j=2*i;j<=10000000;j+=i)
		flag[j]=true;
	}
		
}
int main()
{
	sieve();
	ll n,i,temp;
	int k,j;
	cin>>n;	
	for(i=0;i<169;i++)
	{
		j=primes[i];
		for(k=1;k<20;k++)
		{
			
			if(n %(ll )pow(j,k)==0)
			{
				cout<<"FOUND"<<endl;
				break;
			}
		}
	}
}
