#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
	
	int n;
	cin>>n;
	int a[10000],b[10000];
	bool arr[10000]={false};
	int i;
	for(i=0;i<n;i++)
	cin>>b[i];
	for(i=0;i<n;i++)
	cin>>a[i];
	pair<int,int>p;
	p.insert(make_pair(b[0],0);
	cout<<p.first;
	if(n==1)
	{
		cout<<a[0]+b[0]<<endl;
	}
	else{
	
	
	int flag=0,value=0;
	//CASES
	
	
	
	for(i=0;i<n-1;i++)
	{
		if((a[i]+b[i]==a[i+1]+b[i+1])&&(arr[i]==false))
		{
			flag=1;
			arr[i]=true;
			value=a[i]+b[i];
		}
		else
		if((a[i]+b[i]==a[i+1])&&(arr[i]==false))
		{
			flag=1;
			arr[i]=true;
			value=a[i]+b[i];
		}
		else
		if((a[i]==a[i+1]+b[i+1]+b[i])&&(arr[i]==false))
		{
			flag=1;
			arr[i]=true;
			value=a[i+1]+b[i+1]+b[i];
		}else
		if((a[i]+b[i+1]==a[i+1]+b[i])&&(arr[i]==false))
		{
			flag=1;
			arr[i]=true;
			value=a[i+1]+b[i];
		}
		else
		if((a[i+1]==b[i]+a[i]+b[i+1])&&(arr[i]==false))
		{
			flag=1;
			arr[i]=true;
			value=a[i+1];
		}
		else
		{flag=0;
		break;
		}
	}
	
	if(flag==1){
		cout<<value<<endl;
	}
	else
	cout<<-1<<endl;
	
	}

}
}


