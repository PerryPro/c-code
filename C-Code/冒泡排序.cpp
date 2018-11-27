#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n]={0};
	int b[n]={0};
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
    for (int m=1;m<n;m++)  
    {    
        for (int q=1;q<n;q++)
           {
   	         if (a[q]>a[q+1])
   	             {
   	             	int tem1=a[q];
   	                 a[q]=a[q+1];
   	                 a[q+1]=tem1;
   	              }
   	
        	}
       for (int p=1;p<=n;p++)
           {
           	cout<<a[p]<<" ";
            }
       cout<<endl;
      }
}