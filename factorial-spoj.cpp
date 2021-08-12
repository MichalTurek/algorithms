#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <math.h>
#define ll long long

void ostatnia_cyfra_niezerowa_silni(ll   number)
{
	long zero_counter = 0;
	double i = 1;

	while (number / pow(5, i) >= 1)
	{
		zero_counter += number / pow(5, i);
		i++;
	}
	cout << zero_counter << endl;
}

int main()
{
	int t;
	cin >> t;
	ll  number;

	for (int i = 1; i <= t; i++)
	{
		cin >> number;
		ostatnia_cyfra_niezerowa_silni(number);
	}
}
