#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[7000]= {0};//用于存数
int b[7000]= {0};//用于标记，为1则不输出
int n;
int count=0;
void sign(int,int);
int main()
{
	int m;
	cin>>m;
	for(int i=0; i<m; i++)
	{
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));

		cin>>n;
		for(int j=0; j<n; j++)
		{
			cin>>a[j];
		}
		while(n>0)
		{
			cout<<"--> ";
			for(int q=0; q<n; q++)
			{
				cout<<a[q];
				if(q!=n-1)cout<<" ";
			}
			cout<<endl;
			memset(b,0,sizeof(b));
			for(int i=1; i<=n-1; i++)
			{
				sign(i,n);
			}

			for (int p = 1; p < n; p++)//数组整体左移
			{
				a[p - 1] = a[p];
			}
			n--;
		}
		cout<<"--> ";
		if(i!=m-1)cout<<endl;
	}
}
void sign(int x,int y)//标记x个数，从y处开始
{
	if(x==1)
	{
		for(int j=y-1; j>0; j--)
		{

			b[j]=1;
			cout<<"--> ";
			for(int q=0; q<n; q++)
			{
				if(!b[q])
				{
					cout<<a[q]<<" ";
				}
			}
			cout<<endl;
			b[j]=0;
		}
		return;
	}
	else
	{
		for(int j=y-1; j>0; j--)
		{

			b[j]=1;
			sign(x-1,j);

			b[j]=0;
		}
		return;
	}
}
