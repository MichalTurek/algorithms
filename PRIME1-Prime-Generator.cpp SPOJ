#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <math.h>

int reverse_number(int a)
{

	int a_rev = 0;
	while (a > 0)
	{
		int temp = a % 10;
		a_rev = (a_rev * 10) + temp;
		a /= 10;
	}
	return a_rev;
}

int main()
{
	int  TestNum, a, b;
	bool IsPrime = true;
	cin >> TestNum;
	for (int i = 0; i < TestNum; i++)
	{
		cin >> a >> b;
		int a_rev = 0, b_rev = 0;
		a_rev = reverse_number(a);
		b_rev = reverse_number(b);
		int sum = a_rev + b_rev;
		cout << reverse_number(sum) << endl;
	}
}
