#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,c;
		cin>>m>>n>>c;
		int i;
		int count=0;
		for(i=1;i*i<=c;i++)
		{
			if(c%i==0)
			{
				if(i<=m&&c/i<=n&&(i<=n&&c/i<=m))
				//cout<<i<<" "<<c/i<<endl;
				count+=2;
				else
				if(i<=m&&c/i<=n||(i<=n&&c/i<=m))
				//cout<<i<<" "<<c/i<<endl;
				count++;
							
			}
		}
		cout<<count<<endl;
	}
}
