#include<bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char src,char helper,char dest)

{
	if(n==0)
	{
		return;
	}
	towerofhanoi( n-1, src, dest, helper);
	cout<<"Move from"<<src<<"to"<<dest<<endl;
	towerofhanoi(n-1, helper, src, dest);
}

int main()
{  
	
	towerofhanoi(3,'A','B','C');

 
	return 0;
}