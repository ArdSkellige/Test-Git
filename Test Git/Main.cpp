#include <iostream>
#include <string>

#include "Functions.h"

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main()
{
	cout << "Enter Your name: ";
	string name;
	cin >> name;
	cout << "Hellow, " << name << "!" << endl;

	double d1 = 14.7;
	int i1 = 3;
	cout << CountSum(d1, i1) << endl;
	cout << CountSum<double, double>(18, 2.1) << endl;

	double res = 7.2 + 1;
	cout << res << endl;

	return 0;
}

// git config - меняет текущую конфигурацию git на компьютере;