/*B: ȡ�����м��ֿ���

����

 

һ���ڴ�����3����ɫ��3����ɫ��6����ɫ�򡣴�������ȡn�������ж����ֲ�ͬ����ϣ�

 

����

 

��һ����һ������n����ʾ��n��������ݣ�

Ȼ����n�����ݣ�ÿ�а���һ����������ʾȡ������

 

���

 

����ÿһ�����ݣ�

������ж�������ϣ���������ʾ������ռһ�С�

 

����

 

����
2

3

5	

���
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
