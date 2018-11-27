#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char c0[]="零",c1[]="壹",c2[]="贰",c3[]="叁",c4[]="肆";
char c5[]="伍",c6[]="陆",c7[]="柒",c8[]="捌",c9[]="玖";
char d0[]="",d1[]="",d2[]="拾",d3[]="佰",d4[]="仟";
char d5[]="",d6[]="拾",d7[]="佰",d8[]="仟";
char *p1[]= {c0,c1,c2,c3,c4,c5,c6,c7,c8,c9};
char *p2[]= {d0,d1,d2,d3,d4,d5,d6,d7,d8};
int main ()
{
	int n,c;
	cin>>n;
	getchar();
	for(int i=0; i<n; i++)
	{
		char rmb[20]= {0};
		int j0=0;
		fgets(rmb,20,stdin);
		int len=strlen(rmb)-1;
		if (rmb[0]=='-'&&rmb[1]!='0')
		{
			printf("负");
			for (int i=1; i<=len; i++)
			{
				rmb[i-1]=rmb[i];
			}
			len--;
		}
		if (rmb[0]=='0')
		{
			printf("零圆");
			if(i!=n-1)cout<<endl;
			continue;
		}
		for (int j=0; j<len; j++)
		{
			if (rmb[j]=='0')
			{
				j0=1;
			}
			if (rmb[j]!='0'&&rmb[0]!='0'&&rmb[0]!='-')
			{
				if (j0)
				{
					j0=0;
					printf("%s",c0);

				}
				printf("%s",p1[rmb[j]-'0']);
				printf("%s",p2[len-j]);
			}
			if (len==j+5&&rmb[0]!='0'&&rmb[0]!='-')
			{
				printf("万");
			}
		}
		printf("圆");
		if(i!=n-1)cout<<endl;
	}
}
/*描述

 

  银行在打印票据的时候，常常需要将阿拉伯数字表示的人民币金额转换为大写表示，现在请你来完成这样一个程序。
  在中文大写方式中，0到10以及100、1000、10000被依次表示为：
  零壹贰叁肆伍陆柒捌玖拾佰仟万
  以下的例子示范了阿拉伯数字到人民币大写的转换规则：


1

：

壹圆


11

：

壹拾壹圆


111

：

壹佰壹拾壹圆


101

：

壹佰零壹圆


-1000

：

负壹仟圆


1234567

：

壹佰贰拾叁万肆仟伍佰陆拾柒圆

 

输入

 

  第一行为测试数据的组数n，后面有n个测试数据。每组测试数据一行，为一个绝对值不超过(10^8 - 1)的整数。

 

输出

 

  对于每组测试数据，输出一行，即相应的人民币大写表示。

 

输入示例

 

2

10101

34

 

输出示例

 

壹万零壹佰零壹圆

叁拾肆圆

 */
