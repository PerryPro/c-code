//分解质因数
//描述
//请编写程序，将整数分解为若干个质数的乘积。 
//输入
//输入的第一行含一个正整数k，表示测试例的个数，后面紧接着k行，每行对应一个测试例，包含一个正整数x(2<=x<=10000)。
//输出
//每个测试例对应一行输出，输出x的质数乘积表示式，式中的质数从小到大排列，两个质数之间用“*”表示相乘。中间不要添加任何空格。
//样例
//输入
//输出
//3
//13
//4950
//262	
//13
//2*3*3*5*5*11
//2*131
#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
int isplain(int);//0=非质数 1=是质数；
int isplain(int b)
{
	for(int i=2; i<=sqrt(b); i++)
	{
		if(b%i==0)
		{
			return 0;
			break;
		}
	}
	return 1;
}
int main()
{
	int k;
	cin>>k;
	for(int i=0; i<k; i++)
	{
		int x;
		cin>>x;
		int num[100]= {0};
		if(x<2)
		{
			continue;
		}
		if(isplain(x))
		{
			cout<<x<<endl;
			continue;
		}
		int count=0;
p1:
		for(int i=2; i<=sqrt(x); i++)
		{
			if(x%i==0)
			{
				if(isplain(i))
				{
					x=x/i;
					num[count]=i;
					count++;
					goto p1;
				}
			}
		}
		num[count]=x;
		count++;
		for(int i=0; i<count; i++)
		{
			if(i!=count-1)
			{
				cout<<num[i]<<"*";
			}
			else if(i==count-1)
			{
				cout<<num[i]<<endl;
			}
		}
	}
}
