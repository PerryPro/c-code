#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
	while(1)
	{
p1:		char a[30]={0};
		char b[30]={0};
		int p[30]={0};
		fgets (a,30,stdin);
		int judge=strcmp(a,"End of file\n");
		if(judge==0)
		{
			break;
		}
		int p_count=0;
		for(int i=0;i<30;i++)
		{
			if(a[i]>='0'&&a[i]<='9')
			{
				
			}
			else if(a[i]=='.')
			{
				p[p_count]=i;
				p_count++;
			}
			else if(a[i]=='\n')
			{
				break;
			}
			else
			{
				cout<<"NO"<<endl;
				goto p1;
			}
		}
		if(p_count!=3) 
		{
			cout<<"NO"<<endl;
			goto p1;
		}
		int ip[3]={0};
		for(int i=0;i<=p[0];i++)
		{
			b[i]=a[i];
			if(b[0]=='.') 
			{
				cout<<"NO"<<endl;
				goto p1;
			}
		}
		ip[0]=atoi(b);
		int x=0;
		for(int i=p[0]+1;i<=p[1];i++)
		{
			b[x]=a[i];
			x++;
			if(b[0]=='.') 
			{
				cout<<"NO"<<endl;
				goto p1;
			}
		}
		ip[1]=atoi(b);
		x=0;
		for(int i=p[1]+1;i<=p[2];i++)
		{
			b[x]=a[i];
			x++;
			if(b[0]=='.') 
			{
				cout<<"NO"<<endl;
				goto p1;
			}
		}
		ip[2]=atoi(b);
		x=0;
		for(int i=p[2]+1;i<=28;i++)
		{
			b[x]=a[i];
			x++;
			if(b[0]=='.') 
			{
				cout<<"NO"<<endl;
				goto p1;
			}
		}
		ip[3]=atoi(b);
		if(ip[0]>=0&&ip[0]<=255&&ip[1]>=0&&ip[1]<=255&&ip[2]>=0&&ip[2]<=255&&ip[3]>=0&&ip[3]<=255)
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
	}
}
