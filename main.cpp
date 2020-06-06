#include <iostream>
using namespace std;
double calcsub(int a, char op, int b)
{
	switch(op)
	{
		case '+':
			return a+b;
		case '-':
			return a-b;
		case '*':
			return a*b;
		case '/':
			return a/b;
	}
}
int calculate(int a, char x, int b, char y, int c, char z, int d)
{
	double res = 0;
	res = calcsub(a,x,b);
	res = calcsub(res,y,c);
	res = calcsub(res,z,d);
	return res;
}
inline int process(double num)
{
	if(23.9999 <= num && num <= 24.001)
	{
		return 24;
	}
	return 23;
}
inline void printExpr(int a, char x, int b, char y, int c, char z, int d)
{
	printf("((%d%c%d)%c%d)%c%d = 24\n", a, x, b, y, c, z, d);
}
inline bool allDifferent(int a, int b, int c, int d)
{
	return !(a==b || b==c || c==d || a==c || a==d || b==d);
}
int main()
{
	char num[4];
	for(int i = 0; i < 4; ++i)
	{
		char tmp;
		cin >> tmp;
		if('0' <= tmp && tmp <= '9')
			num[i] = tmp - '0';
		if(tmp == 'J')
			num[i] = 10;
		if(tmp == 'Q')
			num[i] = 11;
		if(tmp == 'K')
			num[i] = 12;
	}
	int count = 0;
	// int res = 0;
	char ol[5] = "+-*/";
	// for operater
	for(int a = 0; a < 4; ++a)
	{
		for(int b = 0; b < 4; ++b)
		{
			for(int c = 0; c < 4; ++c)
			{
				// for number
				for(int d = 0; d < 4; ++d)
				{
					for(int e = 0; e < 4; ++e)
					{
						for(int f = 0; f < 4; ++f)
						{
							for(int g = 0; g < 4; ++g)
							{
								// Wow! O(n^7) ! I can't believe!
								if(allDifferent(num[d], num[e], num[f], num[g])) 
									if(process(calculate(num[d], ol[a], num[e], ol[b],
								  	num[f], ol[c], num[g])) == 24)
								  	{
								  	   printExpr(num[d], ol[a], num[e], ol[b],
								  	   num[f], ol[c], num[g]);
								  	   count++;
								  	}
							}
						}
					}
				}
			}
		}
	}
	cout << "Total " << count << " ways!" << endl;
} 
