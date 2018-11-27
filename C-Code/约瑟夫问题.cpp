#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int n,k,m;
	cin>>n>>k>>m;
	int n2=n;
	bool a[101]={0};
	int c=1;
p1:	k++;if(k>n2){k=1;}
	c++;
	if(a[k]==1){c--;goto p1;}
	if(c==m&&a[k]==0)
	{
		a[k]=1;	
		n--;
		c=0;
	}
	if(c==m&&a[k]==1)
	{
p2:		k++;if(k>n){k=1;}
		if(a[k]==1){goto p1;}
		if(a[k]==0)
		{
			a[k]=1;
			n--;
			c=0;
		}
	}
	if(n>2){goto p1;}
	for(int i=1;i<=n2;i++)
	{
		if(a[i]==0)
		{
			cout<<i<<" ";
		} 
	}
}
