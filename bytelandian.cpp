#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;
int main()
{
	int n;
	string s;
	cin>>n>>s;
	unordered_map<char,char>mp;
	int i;
	for(i=0;i<s.length();i++)
	{
		mp['a'+i]=s[i];
	}
   /*unordered_map<char,char>::iterator it=mp.begin();
   for(;it!=mp.end();it++)
   {
       cout<<it->first<<" "<<it->second<<endl;
   }*/

	
	while(n--)
	{
	    string st;
	    cin>>st;
	    for(i=0;i<st.length();i++)
	    {
	        if(st[i]=='_')
	        st[i]=' ';
	        else
	        
	            if(st[i]>=65&&st[i]<=90){
	                char x=tolower(st[i]);
	            st[i]=toupper(mp.find(x)->second);}
	            else
	            if(mp.find(st[i])!=mp.end())
	            st[i]=mp.find(st[i])->second;
	        
	    }
	    cout<<st<<endl;
	    st.clear();
	}
}
