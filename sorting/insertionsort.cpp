#include<iostream>
using namespace std;

void display(int *a,int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}

void insertion_sort(int *a,int n)
{
	int k,j;
	for(int i=1;i<n;i++)
	{
		k=a[i];
		j=i;
		while(j>0 && a[j-1]>k)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j]=k;
	}	
	display(a,n);
}

int main()
{
	int n;
	cin>>n;
	
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	insertion_sort(a,n);
}
