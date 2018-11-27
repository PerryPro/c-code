#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		int count=0;
p1:		if(a!=0)
		{
			count++;
		}
		a=a/10;
		if(a!=0)
		{
			goto p1;
		}
		cout<<count<<endl;
	}
}
