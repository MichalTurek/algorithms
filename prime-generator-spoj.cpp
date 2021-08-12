#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <math.h>
#define ll long long 
bool prime(int number)
{
	if (number <= 1) return false;
	for (ll i = 2; i * i <= number; i++)
	{
		if (number % i == 0) return false;
	}
	return true;
}
int main()
{
	ll TestNum, min, max;
	bool IsPrime = true;
	cin >> TestNum;
	for (int i = 0; i < TestNum; i++)
	{
		cin >> min >> max;
		for (ll j = min; j <= max; j++)
		{
			if (prime(j)) cout << j << endl;
		}
	}
}
