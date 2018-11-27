#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
using namespace std;

int main()
{
	int max;
	cin>>max;
	int *a = (int*)malloc(sizeof(int)*max);
	//static int a[max];
	int b=2;
	for (int i=1;i<=max;i++)
	{
		a[i]=i;
		
	}
	for (int m=3;m<=max-1;m++)
	{
		if(a[m]!=0)
		{
			
			for (int n=2;n<=sqrt(a[m]);n++)
			{
				if (a[m]%n==0)
				{	
					
					int d=m;
					for(d;d<=max-1;d=m+d)
					{
						a[d]=0;
					}
					break;
				}
				if (a[m]%n!=0)
				{	
					
					int f=m+m;
					for(f;f<=max-1;f=m+f)
					{
						a[f]=0;
					}
					
				}
			}
		}
		
	}
	long long sum=0;
	for (int p=2;p<=max-1;p++)
	{
		if(a[p]!=0)
		{
			sum=sum+a[p];
		}
	}
	cout<<sum;
}

