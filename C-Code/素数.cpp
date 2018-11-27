#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a,m,n;
		cin>>a;
		if(a==1)
		{
			cout<<"no"<<endl;
		}
		else if(a==2)
		{
			cout<<"yes"<<endl;
		}
		else
		{
	     int x=0;
		 for(m=2;m<a;m++)
			{
				n=a%m;
				
				if(n==0)
				{
					x=x+1;
				}
			}
		 if(x==0)
		 {
		 	cout<<"yes"<<endl;
		 }
		 else if(x>0)
		 {
		 	cout<<"no"<<endl;
		 }
		}
	}
	return 0;
	
	
}
