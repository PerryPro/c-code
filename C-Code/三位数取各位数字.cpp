#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int a,b,s,g;
	cin>>a;
    b=a/100;//%10
    s=a/10%10;
    g=a%10;//a/1%10
	cout<<"百位为"<<b<<" 十位为"<<s<<" 个位为"<<g;
	
	
	}