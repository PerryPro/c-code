#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  // 有n组数据
    for (i = 0; i < n; i++) {
        int a, b, c, d;
        int e;
        scanf("%d %d %d %d",&a,&b,&c,&d);
        if (a>b)
        {
        	e=a;
        	a=b;
        	b=e;	
        	}        
        if (a>c)
        {
        	e=a;
        	a=c;
        	c=e;
       	}
        if (a>d)
        {
        	e=a;
        	a=d;
        	d=e;
        	}
        if (b>c)
        {
        	e=b;
        	b=c;
        	c=e;
        	}
        if (b>d)
        {
        	e=b;
        	b=d;
        	d=e;
        	}
        if (c>d)
        {
        	e=c;
        	c=d;
        	d=e;
        	}
      printf("%d %d %d %d\n",a,b,c,d);
        // 读入4个整数，对这4个整数排序，并输出结果
        // 请将排序代码写在这里，不能使用循环语句
    }
   
    return 0;
}