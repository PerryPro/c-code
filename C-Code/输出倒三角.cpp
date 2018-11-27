#include <stdio.h>
#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin>>m;
	    int i;
		for (i=0;i<m;i++)
		   {
			   cin>>n;
			   int x=0;
			   int a,b,c,d;
			   for (a=0;a<n;a++)
			      {
			      	for (b=0;b<x;b++)
			      	    {
			      	    	cout<<" ";
			      	    	}
			          for (c=0;c<2*n-1-2*x;c++)
			              {
			              	cout<<"*";
			              	}
			          x=x+1;
			          cout<<endl;
			      	}
			   }
		
		
	}