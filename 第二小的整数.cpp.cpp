//第二小的整数
//描述
//找出整数序列中第二小的数。
//输入
//第1行是一个整数n，表示随后有n组数据。每组数据占一行，第一个整数m(1<=m<=100)，表示随后有m个整数。
//输出
//对每组数据，输出第二小的数。如果第二小的数不存在，则输出ERROR。
//样例 
//输入	
//输出
//4
//7 3 1 2 4 5 6 7
//4 5 5 8 13
//1 2
//4 3 3 3 3	
//2
//8
//ERROR
//ERROR
#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	cin>>n;
	if(n<=0)
	{
		cout<<"ERROR"<<endl;
	}
	for(int i=0; i<n; i++)
	{
		int m;
		int a[110]= {0};
		cin>>m;
		if(m<=1||m>100)
		{
			for(int i=0; i<m; i++)
			{
				cin>>a[i];
			}
			cout<<"ERROR"<<endl;
			continue;
		}

		for(int i=0; i<m; i++)
		{
			cin>>a[i];
		}
//		for(int i=0;i<m;i++)
//		{
//			cout<<a[i]<<endl;
//		}
		for(int i=0; i<m-1; i++)
		{
			for(int j=i+1; j<m; j++)
			{
				if(a[i]>=a[j])
				{
					int x=a[i];
					a[i]=a[j];
					a[j]=x;
				}
			}
		}
		if(a[0]<a[1])
		{
			cout<<a[1]<<endl;
		}
		else if (a[0]==a[1])
		{
			for(int i=2; i<m; i++)
			{
				if(a[i]>a[1])
				{
					cout<<a[i]<<endl;
					break;
				}
				if(i==m-1)
				{
					cout<<"ERROR"<<endl;
				}
			}
		}
	}
}
