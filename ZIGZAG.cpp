#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int m,n;
	cin>>m>>n;
	int a[100][100]= {0};
	int b=1;
	int x,y;
	x=0;
	y=0;
	a[x][y]=b;
	while(1) {
		y++;
		if(x<m&&y<n) {
			b++;
			a[x][y]=b;
		}
		if(x==m-1&&y==n-1) {
			goto end;
		}
		int y1=y;
		for(int i=0; i<y1; i++) {
			x++;
			y--;
			if(x<m&&y<n) {
				b++;
				a[x][y]=b;
			}
			if(x==m-1&&y==n-1) {
				goto end;
			}
		}
		x++;
		if(x<m&&y<n) {
			b++;
			a[x][y]=b;
		}
		if(x==m-1&&y==n-1) {
			goto end;
		}
		int x1=x;
		for(int q=0; q<x1; q++) {
			x--;
			y++;
			if(x<m&&y<n) {
				b++;
				a[x][y]=b;
			}
			if(x==m-1&&y==n-1) {
				goto end;
			}
		}


	}
end:
	for(int i1=0; i1<m; i1++) {
		for(int i2=0; i2<n; i2++) {
			printf("%d ",a[i1][i2]);
		}
		cout<<endl;
	}
	
}
