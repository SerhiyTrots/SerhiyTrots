#include <iostream>
#include <string>
using namespace std;

struct A {
	int price;
	string name;
	double kilos;
};
 

int main()
{
	int a;
	A my = {23,"ghjgfjjy",34.23};
	cout << my.price << endl << my.name;
	A help[23];
	help[2] = { 23,"ff",23.45 };
	cout << a << endl;
	cout << help[2].price << endl;

	system("pause");
	return 0;
}