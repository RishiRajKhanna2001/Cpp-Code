#include<bits/stdc++.h>

using namespace std;
void replace(string s)
{
	if(s.length()==0)
	{
		return;   //base case
	}
	if(s[0]=='p' && s[1]=='i'){
		cout<<"3.14";
		replace(s.substr(2)); // 2 inside represent the index no. from where to start
	}
	
	else
		cout<<s[0];
	replace(s.substr(1));
}
int main()
{  
	replace("pippxxpiixipi");
	

 
	return 0;
}