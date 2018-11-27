#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	char a[501]={0};
	char b[501]={0};
	fgets (a, 501, stdin);
	fgets (b, 501, stdin);
	a[strlen(a)-1]=0;
	b[strlen(b)-1]=0;
	
	if(strstr(a,b))
	{
		int max=strlen(b);
		int c=strlen(a);
		int n=0;
		for(int i=0;i<c;i++)
		{
			if(a[i]==b[n])
			{
				if(n==max-1)
				{
					goto p1;
				}
				n++;
				continue;
			}
			if(a[i]!=b[n])
			{
				n=0;
				continue;
			}
			
		p1:	cout<<i-max+1;
			break;
		}	
	}
	else
	{
		cout<<"-1";
	}
}
