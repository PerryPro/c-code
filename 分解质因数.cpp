//�ֽ�������
//����
//���д���򣬽������ֽ�Ϊ���ɸ������ĳ˻��� 
//����
//����ĵ�һ�к�һ��������k����ʾ�������ĸ��������������k�У�ÿ�ж�Ӧһ��������������һ��������x(2<=x<=10000)��
//���
//ÿ����������Ӧһ����������x�������˻���ʾʽ��ʽ�е�������С�������У���������֮���á�*����ʾ��ˡ��м䲻Ҫ����κοո�
//����
//����
//���
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
int isplain(int);//0=������ 1=��������
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
