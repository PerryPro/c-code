#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
int a[7000] = { 0 };
int b[7000] = { 0 };
int n;
int count1 = 0;
int jc = 0;
int temx = 1;
void sign(int, int);
int main()
{
	int m;
	cin >> m;
	for (int i = 0; i<m; i++)
	{
		memset(a, 0, sizeof(a));
		memset(b, 0, sizeof(b));

		cin >> n;
		for (int j = 0; j<n; j++)
		{
			cin >> a[j];
		}
		while (n>0)
		{

			memset(b, 0, sizeof(b));
			for(int i=n; i>=1; i--)
			{
				
				sign(i,0);
				jc=0;
				if (i == 1)
				{
				cout << "--> " << a[0] << endl;
				
			}
				count1=0;
			}

			for (int p = 1; p < n; p++)
			{
				a[p - 1] = a[p];
			}
			n--;
		}
		cout << "--> ";
		if (i != m - 1)cout << endl;
	}
}
void sign(int x, int y)
{
	if (count1 == temx)
	{


		cout << "--> ";
		for (int q = 0; q<n; q++)
		{
			if (b[q] == 1)
			{
				cout << a[q] << " ";
			}
		}
		cout << endl;
		return;
	}
	else
	{
		if (jc == 0)
		{
			temx = x;
			jc = 1;
		}
		b[0] = 1;
		for (int j = y+1 ; j<n; j++)
		{

			b[j] = 1;
			count1++;
			sign(x, j);

			b[j]=0;
			count1--;
		}
		return;
	}
}
