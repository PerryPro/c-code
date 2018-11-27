#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a;
		cin>>a;
		int m,n,p,q,l;
		q=0;
		l=a;
		for(p=0;p<a;p++)
		{
			
			for(m=0;m<l-1;m++)
			{	
				cout<<" ";
			}
			q=q+1;
			for(n=0;n<2*q-1;n++)
			{
				cout<<"*";
			}
			l=l-1;
			cout<<endl;
			
		}
	}
	
}
