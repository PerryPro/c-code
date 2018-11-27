#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int br=0;
	int lk=0;
	int rk=0;
	int ap=0;
	int dou=0;
	int lxl=0;
	int lxr=0;
	int depth[2]= {1,1};
	int len=1;
	int inner=0;
	while(1)
	{
		int a=getchar();
		if(a=='E')
		{
			br++;
			continue;
		}
		else if(a=='N')
		{
			br++;
			continue;
		}
		else if(a=='D')
		{
			br++;
			continue;
		}
		else if(a=='\n')
		{

			if(br==3)
			{
				break;
			}
//			if(rk==1)
//			{
//				cout<<"????"<<ap<<endl;
//			}
//			else
//			{
//				cout<<"????"<<ap+1<<endl;
//			}
			if(ap!=0)cout<<len<<" ";
			if(ap==0&&lk==1)cout<<"0"<<" ";
			if(ap==0&&lk>1)cout<<len<<" ";
			cout<<depth[0]<<endl;
			lk=0;
			rk=0;
			ap=0;
			dou=0;
			lxl=0;
			depth[1]=1;
			depth[0]=1;
			len=1;
			inner=0;
			continue;
		}
		else if(a=='(')
		{
			if(dou==0&&lk==1)inner++;
			lk++;
			if(dou!=0)inner++;
			
			if(lxl==1)
			{


				depth[1]++;
				if(depth[1]>depth[0])
				{
					depth[0]=depth[1];
				}
			}



			lxl=1;
			lxr=0;
		}
		else if(a==')')
		{
			rk++;
			depth[1]=1;
			if(inner>0)inner--;
//			if(lxr==1&&lk==rk)
//			{
//				ap++;
//			}
			lxr=1;
			lxl=1;
		}
		else if(a>='a'&&a<='z')
		{
			ap++;

		}
		else if(a==',')
		{
			dou++;
			if(inner==0)len++;
		}
	}

}

