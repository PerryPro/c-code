//电子表格
//描述
//有一个r行c列(1<=r,c<=50)的电子表格，行从上到下编号为1~r，列从左到右编号是1~c。上面定义了几种操作：(x, y等都是整数)
//  SR x1 x2
//交换x1行和x2行
//  SC y1 y2
//交换y1列和y2列
//  DR x
//删除x行
//  DC y
//删除y列
//  IR x
//在x行上面插入一行，新插入的行的所有单元格值为0
//  IC y
//在y列前面插入一列，新插入的列的所有单元格值为0
//输入
//第一行是2个整数r, c，表示电子表格有r行c列。接下来的r行，每行c个整数，表示每个单元格的值。再接下来的一行有1个整数n，表示随后有n行，每行是一个操作命令。
//输出
//输出经过这n次操作后的电子表格内容。
//样例输入
//3 5
//1 2 3 4 5
//3 4 5 6 7
//5 6 7 8 9
//4
//SR 1 3
//SC 2 4
//IR 2
//DC 2
//样例输出
//5 7 6 9
//0 0 0 0
//3 5 4 7
//1 3 2 5
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	int a[100][55]= {0};
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			cin>>a[i][j];
		}
	}
	int n;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		string act;
		cin>>act;
		if(act=="SR")
		{
			int x,y;
			cin>>x>>y;
			for(int i=0; i<c; i++)
			{
				int tem=a[x-1][i];
				a[x-1][i]=a[y-1][i];
				a[y-1][i]=tem;
			}
		}
		else if(act=="SC")
		{
			int x,y;
			cin>>x>>y;
			for(int i=0; i<r; i++)
			{
				int tem=a[i][x-1];
				a[i][x-1]=a[i][y-1];
				a[i][y-1]=tem;
			}
		}
		else if(act=="DR")
		{
			int x;
			cin>>x;
			if(x<r)
			{
				for(int i=x; i<r; i++)
				{
					for(int j=0; j<c; j++)
					{
						a[i-1][j]=a[i][j];
					}
				}
			}
			r--;

		}
		else if(act=="DC")
		{
			int x;
			cin>>x;
			if(x<c)
			{
				for(int i=x; i<c; i++)
				{
					for(int j=0; j<r; j++)
					{
						a[j][i-1]=a[j][i];
					}
				}
			}
			c--;
		}
		else if(act=="IR")
		{
			int x;
			cin>>x;
			for(int i=r-1; i>=x-1; i--)
			{
				for(int j=0; j<c; j++)
				{
					a[i+1][j]=a[i][j];
				}
			}
			for(int i=0; i<c; i++)
			{
				a[x-1][i]=0;
			}
			r++;
		}
		else if(act=="IC")
		{
			int x;
			cin>>x;
			for(int i=c-1; i>=x-1; i--)
			{
				for(int j=0; j<r; j++)
				{
					a[j][i+1]=a[j][i];
				}
			}
			for(int i=0; i<r; i++)
			{
				a[i][x-1]=0;
			}
			c++;
		}

	}
	for(int i=0; i<r; i++)
	{
		for(int j=0; j<c; j++)
		{
			if(j!=c-1)
			{
				cout<<a[i][j]<<" ";
			}
			else
			{
				cout<<a[i][j]<<endl;
			}
		}
	}
}
