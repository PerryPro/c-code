/*B: 取彩球有几种可能

描述

 

一个口袋中有3个红色球、3个白色球、6个黑色球。从中任意取n个球，问有多少种不同的组合？

 

输入

 

第一行是一个整数n，表示有n组测试数据；

然后有n行数据，每行包含一个整数，表示取几个球

 

输出

 

对于每一组数据：

输出共有多少种组合，用整数表示，单独占一行。

 

样例

 

输入
2

3

5	

输出
10

15*/
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a;
	int r,w,b;
	int count;
	for(int i=0;i<n;i++)
	{
		r=w=b=0;
		count=0;
		cin>>a;
		for(b=0;b<=6;b++)
		{
			if(a-b==0){count++;}
			if(a-b>0)
			{
				for(r=0;r<=3;r++)
				{
					if(a-b-r==0){count++;}
					if(a-b-r>0)
					{
						for(w=0;w<=3;w++)
						{
							if(a-b-r-w==0){count++;}
						}
					}
				}
			}
			
		}
		cout<<count<<endl;
	}
} 
