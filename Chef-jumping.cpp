#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
	ll x,a,i;
	cin>>a;
	int mode=0;
	
	x=a/6;
	x=x*6;
	if(x==a)
	mode=1;
	else
	if(x+1==a||x+3==a||x+6==a)
	mode=1;
	
	
	if(mode==1)
	cout<<"yes"<<endl;
	else
	cout<<"no"<<endl;
}
