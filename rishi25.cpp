#include<iostream>

using namespace std;

int  main()
{
	int n,i;
	cin>>n;
	for(i=2;i<=n/2;i++)

	{
		{
			cout<<i<<endl;
		}
		if((n%i)==0)
		{
			cout<<"not prime";
			break;
		}
	}
	{
	if(i==n/2)
	{
		cout<<"prime";
	}
}
	return 0;
}AAAAAAAAA