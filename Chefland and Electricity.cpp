#include<bits/stdc++.h>
using namespace std;
int find1(char *s,int k)
{
	int i;
	for(i=k;i>=0;i--)
	{
		if(s[i]=='1')
		{
			
			break;
		}
	}
	return i;
}
int find2(char *s,int k,int n)
{
	int i;
	for(i=k;i<n;i++)
	{
		if(s[i]=='1')
		break;
	}
	return i;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	int n;
	cin>>n;
	char s[100000];
	bool arr[10001]={false};
	cin>>s;
	int i,b,c,j,*a=new int[n];
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	{
		if(s[i]=='0')
		{
			b=find1(s,i-1);
			c=find2(s,i+1,n);
			if(abs(a[i]-a[b])<abs(a[i]-a[c]))
			{
				for(j=a[i];j>a[b];j--)
				arr[j]=true;
			}
			else{
			for(j=a[i];j<a[c];j++)
				arr[j]=true;
			}			
		}		
	}
	
	int count=0;
	for(i=1;i<=a[n-1];i++){
	if(arr[i]==true)
	count++;
	}
	cout<<count<<endl;
	}	
}


