#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	int b=1;
	
	for(int c=0;c<n;c++)
	{
		int e=1;
		for(int d=0;d<b;d++)
		{
			cout<<a[e]<<" ";
			e=e+1;	
		}
		cout<<endl;
		int g=1;
		if(a[g]>a[b])
		{
			int f=a[g];
			a[g]=a[b];
			a[b]=f;
		}
		b=b+1;
		for(g;g<=b;g++)
		{
			if(a[g]>a[b])
			{
				int x=a[g];
				a[g]=a[b];
				a[b]=x;
			}
		}
		
	}
}
