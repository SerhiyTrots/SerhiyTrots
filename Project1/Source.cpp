#include <iostream>
using namespace std;

int main()
{
	const int index = 12;
	cout << "Enter a height in duyms : _______\b\b\b\b\b\b\b";
	int d;
	cin >> d;
	int f = d / 12;
	d = d % 12;
	cout << endl << "In funts :" << f << endl << "and " << d << " duyms" << endl;

	system("pause");
	return 0;
}