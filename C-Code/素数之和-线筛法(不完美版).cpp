#include <iostream>
#include <math.h>
using namespace std;
bool a[10000000]={0};
int main()
{
	int max;
	cin>>max;
	long long sum=0;
	for(int i=2;i<=max;i++)
	{
		if(a[i]==0)
		{
			int d=2;
			//int c=max/i;
			for(int m=2;m<=max;m=d*i)
			{
				a[m]=1;
				d++;
			}
		}
	}
	for(int n=2;n<max;n++)
	{
		if(a[n]!=1)
		{
			sum=sum+n;
		}
	}
	cout<<sum-2;
}
