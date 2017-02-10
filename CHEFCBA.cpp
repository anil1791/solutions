#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[4];
	int i;
	for(i=0;i<4;i++)
	cin>>a[i];
	sort(a,a+4);
	int flag =0;
	do {
    //std::cout << myints[0] << ' ' << myints[1] << ' ' << myints[2] << '\n';
    if ((double)a[0]/a[1]==(double)a[2]/a[3]){	
    flag=1;	
	break;
	}
    
    
  } while (next_permutation(a,a+4) );

if(flag==1)
cout<<"Possible"<<endl;
else
cout<<"Impossible"<<endl;
}
