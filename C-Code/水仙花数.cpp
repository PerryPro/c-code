#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int t,i;
	int x=0;
	cin>>t;
	for (i=0;i<t;i++)
	{
		int m,n;
		scanf("%d %d",&m,&n);
		for (m;m<=n;m++)
		{
			
			int g,s,b;
			g=m%10;
			s=(m/10)%10;
			b=m/100;
			if (g*g*g+s*s*s+b*b*b==m)
			{
				cout<<m<<" ";
				x=x+1;
				}
			
			}
	     if (x==0)
	     {
	     	cout<<-1;
	     	}	
		cout<<endl;
		
		
		}
	
	
	
	
	}