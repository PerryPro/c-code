#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={0};
	int b[n]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int m=1;m<=n;m++)
	{
		b[m]=a[m];
	}
	int d=1;
	int nt=n;
	for(int c=0;c<n;c++)
	{
		int g=1;
		if(a[g]>a[d])
		{
			int f=a[g];
			a[g]=a[d];
			a[d]=f;
		}
		d=d+1;
		for(g;g<=d;g++)
		{
			if(a[g]>a[d])
			{
				int x=a[g];
				a[g]=a[d];
				a[d]=x;
			}
		}
		
	}
	for(int q=1;q<n;q++)
	{
		int max;
		
		max=a[nt];
		int y;
		for(int j=1;j<=n;j++)
		{
			if(b[j]==max)
			{
				y=j;
				break;
			}	
		}
		for(int k=y;k<nt;k++)
		{
			
			b[k]=b[k+1];
		}
		b[nt]=max;
		nt=nt-1;
		for(int o=1;o<=n;o++)
		{
			cout<<b[o]<<" ";
		}
		cout<<endl;
	}
	
}
