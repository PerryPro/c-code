#include <iostream>
#include <cstring>
using namespace std;
int m,n;
int main()
{
	int k;
	cin>>k;
	for(int i=0;i<k;i++)
	{
		cin>>m>>n;
		int a[m][n]={0};
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(i==0||j==0)
				{
					a[i][j]=1;
				}
				else
				{
					a[i][j]=a[i][j-1]+a[i-1][j];
				}
			}
		}
		cout<<a[m-1][n-1]<<endl;
	}
	
}
/*
数组遍历
描述

 

给定一个大小是m*n（m,n<=100）的整形数组A，求从A[0][0]到A[m-1][n-1]共有多少条路径，注意只能向右或是向下移动！

 

这是一张图片示例



 

输入

 

第1行是N代表有N组测试数据。然后每组测试数据包括两个整数m和n，分别用来表示数组的行和列。

 

输出

 

对每组数据输出输出路径条数并换行。

 

样例

 

输入

输出

3

2 2

1 1

1 3

2

1

1

 

 

提示

 

请从标准输入读入数据，将结果输出到标准输出。输出之间用换行符隔开。可以使用动态规划来解此题！

 
*/
