#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++) 
	{
		int a;
		cin>>a;
		if(a<0)
		{
			cout<<"error"<<endl;
		}
		if(a>=0)
		{
			double x1,x2;
			x1=1.0*a/2;
			x2=0;
			while(1)
			{
				if(x2!=0)
				{
					x1=x2;
				}
				x2=0.5*(x1+a/x1);
				if(abs(x2-x1)<0.00001)
				{
					break;
				}
			}
    		printf("%.5lf\n",x2);
    	}
	}

}
