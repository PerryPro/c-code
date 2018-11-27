#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		char a[1100]={0};
		char b[1100]={0};
		int y2[1100]={0};
		int x[1100]={0};//´æa 
		int y[1100]={0};//´æb 
		int sum[1100]={0};
		int move=0;
		cin>>a>>b;
		//int carry=0;
		int la=strlen(a);
		int lb=strlen(b);
		int ca=0;
		int cb=0;
		for(int i=la-1;i>=0;i--)
		{
			x[ca]=a[i]-'0';
			ca++;
		}
		for(int i=lb-1;i>=0;i--)
		{
			y[cb]=b[i]-'0';
			cb++;
		}
		cb=0;
		for(int i=lb-1;i>=0;i--)
		{
			y2[cb]=b[i]-'0';
			cb++;
		}
		for(int i=0;i<la;i++)
		{
			
		//	int ju=0;
			int carry=0;
				if(i!=0)
				{
//					for(int k=strlen(b)-1;k>=0;k--)
//					{
//						y[k+1]=y[k];
//					}
//					y[0]=0;
//					ju=1;
//					lb++;
					move++;
				}
				int count=0;
				for(int p=move;;p++)
				{
					if(count==lb-1&&x[i]*y2[count]+sum[p]+carry>9)
					{
						sum[p+1]=(x[i]*y2[count]+sum[p]+carry)/10;
						sum[p]=(x[i]*y2[count]+sum[p]+carry)%10;
						lb++;
						break;
						
					}
					if(count==lb-1&&x[i]*y2[count]+sum[p]+carry<10)
					{
						
						sum[p]=x[i]*y2[count]+sum[p]+carry;
						carry=0;
						break;
						
					}
					if(x[i]*y2[count]+sum[p]+carry<10)
					{
						
						sum[p]=x[i]*y2[count]+sum[p]+carry;
						carry=0;
						count++;
						continue;
					}
					else if(x[i]*y2[count]+sum[p]+carry>9)
					{
						int t=sum[p];
						sum[p]=(x[i]*y2[count]+sum[p]+carry)%10;
						carry=(x[i]*y2[count]+t+carry)/10;
						count++;
						continue;
					}
					
				}
			
		}
		int out=0;
		for(int q=move+lb-1;q>=0;q--)
		{
			if(sum[q]!=0)
			{
				out=1;
			}
			if(out==1)cout<<sum[q];
		}
		cout<<endl;
	}
}
