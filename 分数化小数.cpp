#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		int a,b,c;
		cin>>a>>b>>c;
		if(a>=2&&a<=1000&&b>=2&&b<=1000&&c>=2&&c<=1000)
		{
			cout<<a/b<<".";
			int i;
			for(i=0;i<c-1;i++)
			{
				int e;
				a=a%b;
				e=10*a/b;
				
				
				cout<<e;
				a=10*a%b;
			}
			double x=10.0*a/b;
			printf("%.0lf",x);
			cout<<endl;
		}
	}


}
