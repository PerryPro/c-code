#include <iostream>
using namespace std;
int main()
{
	int n;
	char a;
	cin>>n>>a;
	if(n<7)
	{
		cout<<a<<endl;
		cout<<n-1;
	}
	else
	{
		int b=3;
		int sum=0;
		while(1)
		{
			sum+=b;
			if(2*(sum+b+2)+1>n)
			{
				break;
			}
			b+=2;
		}
		int b2=b;
		for(int i=0;i<(b2+1)/2;i++)
		{
			for(int j=0;j<i;j++)
			{
				cout<<" ";
			}
			for(int j=0;j<b;j++)
			{
				cout<<a;
			}
			cout<<endl;
			b-=2;
		}
		b=3;
		for(int i=(b2-1)/2;i>0;i--)
		{
			for(int j=0;j<i-1;j++)
			{
				cout<<" ";
			}
			for(int j=0;j<b;j++)
			{
				cout<<a;
			}
			cout<<endl;
			b+=2;
		}
		
		cout<<n-(2*sum+1);
	}
}
/*
打印沙漏 （20 分）

本题要求你写个程序把给定的符号打印成沙漏的形状。例如给定17个“*”，要求按下列格式打印

*****
 ***
  *
 ***
*****

所谓“沙漏形状”，是指每行输出奇数个符号；各行符号中心对齐；相邻两行符号数差2；符号数先从大到小顺序递减到1，再从小到大顺序递增；首尾符号数相等。

给定任意N个符号，不一定能正好组成一个沙漏。要求打印出的沙漏能用掉尽可能多的符号。
输入格式:

输入在一行给出1个正整数N（≤1000）和一个符号，中间以空格分隔。
输出格式:

首先打印出由给定符号组成的最大的沙漏形状，最后在一行中输出剩下没用掉的符号数。
输入样例:

19 *

输出样例:

*****
 ***
  *
 ***
*****
2

*/