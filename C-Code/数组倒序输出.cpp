#include <iostream>
using namespace std;
int main()
{
	int a[100]={0};
	int i,d=0;
	
	for (i=0;i<20;i++)
	{
		d=d+1;
		a[d]=i;
		
		
		}
	for (d;d>0;d--)
	{cout<<a[d]<<endl;}
	}