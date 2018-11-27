#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int T,i;
	cin>>T;
	for(i=0;i<T;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		if(a==b)
		{
			cout<<a<<endl;
		}
		if(a>b)
		{
			int m,x;
			for(m=1;m<=b;m++)
			{
				
				int x1,x2;
				x1=a%m;
				x2=b%m;
				if(x1==0&&x2==0)
				{
					x=m;	
				}
				x1=x2=1;
			}
			cout<<x<<endl;
		}
		if(a<b)
		{
			int c,d,e;
			for(c=1;c<=a;c++)
			{
				int x3,x4;
				x3=a%c;
				x4=b%c;
				if(x3==0&&x4==0)
				{
					e=c;
				}
			    x3=x4=1;
			
			}
			cout<<e<<endl;
			
		}
	}
	return 0;	
}
