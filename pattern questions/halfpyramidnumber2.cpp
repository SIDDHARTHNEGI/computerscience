#include<iostream>

using namespace std;

int main()
{
	int n,i,j,k;
	cin>>n;
	
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=n-i;k++)
		{
			cout<<" ";
		}
		for(j=i;j>=1;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
	
}
