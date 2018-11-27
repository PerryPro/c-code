#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n,i;
	int num[10000]={0};
	int x;
	x=0;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a,b,c,d,i;
		cin>>a>>b;
		do{
			c=a%b;
			a=a/b;
			x=x+1;
			num[x]=c;
			if(c<b&&a<b)
			{
				break;
			}
		}while(1);
		cout<<a;
		for(x;x>0;x--)
		{
			cout<<num[x];
		}
		cout<<endl;
	
	}
}
