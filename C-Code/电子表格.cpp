//���ӱ��
//����
//��һ��r��c��(1<=r,c<=50)�ĵ��ӱ���д��ϵ��±��Ϊ1~r���д����ұ����1~c�����涨���˼��ֲ�����(x, y�ȶ�������)
//  SR x1 x2
//����x1�к�x2��
//  SC y1 y2
//����y1�к�y2��
//  DR x
//ɾ��x��
//  DC y
//ɾ��y��
//  IR x
//��x���������һ�У��²�����е����е�Ԫ��ֵΪ0
//  IC y
//��y��ǰ�����һ�У��²�����е����е�Ԫ��ֵΪ0
//����
//��һ����2������r, c����ʾ���ӱ����r��c�С���������r�У�ÿ��c����������ʾÿ����Ԫ���ֵ���ٽ�������һ����1������n����ʾ�����n�У�ÿ����һ���������
//���
//���������n�β�����ĵ��ӱ�����ݡ�
//��������
//3 5
//1 2 3 4 5
//3 4 5 6 7
//5 6 7 8 9
//4
//SR 1 3
//SC 2 4
//IR 2
//DC 2
//�������
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
