#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	int a[1002]= {0};
	for(int i=0; i<m; i++)
		{
			int b=0;
			while(1)
				{
					b++;
					cin>>a[b];
					if(a[b]==0)
						{
							break;
						}
				}
		
			int max=a[1];
			for(int q1=2; q1<=b-1; q1++)
				{
					if(max<=a[q1])
						{
							max=a[q1];
						}
				}
/*				if (b==1)
			{
				cout<<"1"<<endl;
				}*/
			if(max==b-1)
			{
				cout<<max+1<<endl;
				
				
				
				
			}
			else
			{
			 for(int q2=1; q2<=max; q2++)
				{
					int judge=0;
					for(int q3=1; q3<=b-1; q3++)
						{
							if(a[q3]==q2)
								{
									judge=1;
									break;
								}
						}
					if(judge==0)
						{
							cout<<q2<<endl;
						}
				}
			}
			
		}

}