#include<iostream>

using namespace std;
void pascal(int n)
{
	
	for(int i=1;i<=n;i++)
	{
		int c=1;
		for(int j=1;j<=n;j++)
		{
			cout<<c<<" ";
			c=c*(i-j)/j;

			
		}
		cout<<endl;
	}
}

int main()
{
	pascal(7);

	return 0;
}

















