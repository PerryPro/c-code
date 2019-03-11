#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	long long n;
	cin>>n;
	char a[n+1]= {0}; //0==素数，1==合数
	int count=0;
	int pair=0;
	for(int i=2; i<=n; i++)
	{
		if(a[i]==0)
		{
			count++;
		}
		for(int j=i+i; j<=n; j+=i)
		{
			a[j]='1';
		}
	}
	for(int i=2; i<=n; i++)
	{
		if(a[i]==0)
		{
			for(int j=i+1; j<=n; j++)
			{
				if(a[j]==0)
				{
					if(j-i==2)pair++;
					i=j-1;
					break;
				}
			}
		}
	}
	cout<<pair;
	
}
/*
素数对猜想 （20 分）



让我们定义dn为：dn=pn+1−p​n，其中pi​​是第i个素数。显然有d1​​=1，且对于n>1有d​n​​是偶数。“素数对猜想”认为“存在无穷多对相邻且差为2的素数”。
现给定任意正整数N<10^5，请计算不超过N的满足猜想的素数对的个数。

输入格式:

输入在一行给出正整数N。

输出格式:

在一行中输出不超过N的满足猜想的素数对的个数。

输入样例:
20


输出样例:
4


*/