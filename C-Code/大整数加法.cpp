#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
	char a[501],b[501];     
    int c[501],d[501];
    for(int m=0;m<n;m++)
    {
		memset(a,0,sizeof(a));
    	memset(b,0,sizeof(b));
    	memset(c,0,sizeof(c));
    	memset(d,0,sizeof(d));
    	cin>>a>>b;
        int len1,len2,i,j;
        len1=strlen(a);
        len2=strlen(b);
        j=0;
        int max=len1>len2?len1:len2;
        for(i=len1-1; i>=0; i--)
        {
        	c[j++]=a[i]-'0';
		}    
        j=0;
        for(i=len2-1; i>=0; i--)
        {    
			d[j++]=b[i]-'0';
		}
        for(i=0; i<max; i++)
        {
            d[i]=d[i]+c[i];
            if(d[i]>=10)
            {
                d[i]=d[i]-10;
                d[i+1]++;
            }
        }
        if(d[max]!=0) 
        {
        	cout<<d[max];
		}
        for(i=max-1; i>=0; i--)
        {
        	cout<<d[i];
		}
        cout<<endl;  
	}
}
/*
  *过程如下，假设输入两个字符串123456和987654，先将这两个
  *字符串逆转并且分位保存到两个整型数组里面（因为做加法时
  *从低位开始相加），然后就和手工算法一样依次相加。
  */
