#include <iostream>
using namespace std;
void fun(int *b,int *a)
{
	int t=*b;
	*b=*a;
	*a=t;
}
int main()
{
	int a=1;
	int b=5;
	cout<<"a="<<a<<"b="<<b<<endl;
	fun(&a,&b);
		cout<<"a="<<a<<"b="<<b<<endl;
}
