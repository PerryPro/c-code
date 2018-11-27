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
//	a[strlen(a)-1]=0;	//此两行可有可无 
//	b[strlen(b)-1]=0;	//
	int ma=strlen(a);
	int mb=strlen(b);
	int count=0;
	int q=0;
	for(int i=0;i<mb;i++)
	{
		for(q;q<ma;q++)
		{
			if(b[i]==a[q])
			{
				count++;
				break;
			}
		}
	}
	if(count==mb)
	{
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}
}
