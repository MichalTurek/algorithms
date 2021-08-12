#include <iostream>
using std::cout;
using std::cin;
#include <string>
using std::string;


int main()
{
	string number;
	cin >> number;
	char last_digit = number[number.length() - 1];
	if (last_digit != '0')
	{
		cout << "1\n";
		cout << last_digit << "\n";
	}
	else cout << "2\n";

}
