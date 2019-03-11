#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	char a[21]= {0};
	cin>>a;
	int la=strlen(a);
	int b[22]= {0};
	int c=0;
	for(int i=la-1; i>=0; i--)
	{
		b[c++]=a[i]-'0';
	}
	int carry=0;
	for(int i=0; i<c; i++)
	{
		if(b[i]*2+carry<=9)
		{
			b[i]=b[i]*2+carry;
			carry=0;
		}
		else
		{
			int tem=b[i]*2+carry;
			b[i]=tem%10;
			carry=tem/10;
		}
	}
	b[c]=carry;
//	for(int i=21;i>=0;i--)
//	{
//		cout<<b[i];
//	}
	int d[10][3]= {0};
	for(int i=0; i<la; i++)
	{
		switch (a[i])
		{
			case '0':
				d[0][1]++;
				break;
			case '1':
				d[1][1]++;
				break;
			case '2':
				d[2][1]++;
				break;
			case '3':
				d[3][1]++;
				break;
			case '4':
				d[4][1]++;
				break;
			case '5':
				d[5][1]++;
				break;
			case '6':
				d[6][1]++;
				break;
			case '7':
				d[7][1]++;
				break;
			case '8':
				d[8][1]++;
				break;
			case '9':
				d[9][1]++;
				break;
		}
	}
	int ju=0;
	for(int i=21; i>=0; i--)
	{
		if(ju==0)
		{
			if(b[i]!=0)
			{
				ju=1;
				goto p1;
			}
			continue;
		}
		else
		{
p1:
			switch (b[i])
			{
				case 0:
					d[0][2]++;
					break;
				case 1:
					d[1][2]++;
					break;
				case 2:
					d[2][2]++;
					break;
				case 3:
					d[3][2]++;
					break;
				case 4:
					d[4][2]++;
					break;
				case 5:
					d[5][2]++;
					break;
				case 6:
					d[6][2]++;
					break;
				case 7:
					d[7][2]++;
					break;
				case 8:
					d[8][2]++;
					break;
				case 9:
					d[9][2]++;
					break;
			}
		}
	}
	int judge=0;
	for(int i=0; i<10; i++)
	{
		if(d[i][1]!=d[i][2])
		{
			judge=1;
			break;
		}
	}
	if(judge==0)
	{
		cout<<"Yes"<<endl;
	}
	else cout<<"No"<<endl;
	ju=0;
		for(int i=21; i>=0; i--)
		{
			if(ju==0)
			{
				if(b[i]!=0)
				{
					ju=1;
					goto p2;
				}
				continue;
			}
			else
			{
p2:			cout<<b[i];
			}
		}
}
/*
 Have Fun with Numbers £¨20 ·Ö£©



Notice that the number 123456789 is a 9-digit number consisting exactly the numbers from 1 to 9, with no duplication. Double it we will obtain 246913578, which happens to be another 9-digit number consisting exactly the numbers from 1 to 9, only in a different permutation. Check to see the result if we double it again!

Now you are suppose to check if there are more numbers with this property. That is, double a given number with k digits, you are to tell if the resulting number consists of only a permutation of the digits in the original number.

Input Specification:

Each input contains one test case. Each case contains one positive integer with no more than 20 digits.

Output Specification:

For each test case, first print in a line "Yes" if doubling the input number gives a number that consists of only a permutation of the digits in the original number, or "No" if not. Then in the next line, print the doubled number.

Sample Input:
1234567899


Sample Output:
Yes
2469135798


*/