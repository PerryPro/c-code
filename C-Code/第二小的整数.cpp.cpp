//�ڶ�С������
//����
//�ҳ����������еڶ�С������
//����
//��1����һ������n����ʾ�����n�����ݡ�ÿ������ռһ�У���һ������m(1<=m<=100)����ʾ�����m��������
//���
//��ÿ�����ݣ�����ڶ�С����������ڶ�С���������ڣ������ERROR��
//���� 
//����	
//���
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
