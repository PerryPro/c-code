#include <iostream>
#include <cstdio>
#include <cstring>
#include <stdlib.h>
using namespace std;
int main()
{
	char a[7500][50]= {0};
	int tem[7500]= {0};
	int count[7500]= {0};
	for(int i=1; i<7500; i++)
	{
		for(int m=0; m<50; m++)
		{
			int d=getchar();
			if(d>='0'&&d<='1')
			{
				a[i][m]=d;
				tem[i]=i;
			}
			else if(d>='a'&&d<='z')
			{
				a[i][m]=d;
				tem[i]=i;
			}
			else if(d>='A'&&d<='Z')
			{
				a[i][m]=d;
				tem[i]=i;
			}
			else if(d==' ')
			{
				for(int n=1; n<=i; n++)
				{
					if(strcmp(a[n],a[i])==0)
					{
						count[n]++;
						if(count[n]>1)
						{
							for(int m=0; m<50; m++)
							{
								a[i][m]=0;
							}

						}
					}
				}
				break;
			}
			else if(d=='\n')
			{
				for(int n=1; n<=i; n++)
				{
					if(strcmp(a[n],a[i])==0)
					{
						count[n]++;
						if(count[n]>1)
						{
							for(int m=0; m<50; m++)
							{
								a[i][m]=0;
							}

						}
					}
				}
				goto end;
			}
		}
	}
end:for(int i=1; i<7499; i++) //����
	{
		for(int j=i+1; j<7500; j++)
		{
			if(strlen(a[tem[i]])!= 0&&strlen(a[tem[j]])!= 0)
			{

				if(strcmp(a[tem[i]],a[tem[j]])>0)
				{
					int t=tem[i];
					tem[i]=tem[j];
					tem[j]=t;
				}
			}
		}
	}
	for(int i=1; i<7500; i++)
	{

		if(strlen(a[tem[i]])!= 0)
		{
			cout<<a[tem[i]]<<" "<<count[tem[i]]<<endl;
		}

	}
}



