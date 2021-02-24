#include<iostream>
using namespace std;

int main()
{
	int i,j,n,k,s;
	cin>>n;
	for(i=n;i>=1;i--)
	{
		for(k=n-i;k>=1;k--)
		{
		   cout<<" ";
		}
		
		for(j=2*i-1;j>=1;j--)
		{
			cout<<j;
		}
		cout<<endl;
	}
}
