#include <iostream>
using namespace std;

	template <typename T>
T add (T i, T j)
{
	return (i + j);
}

int main()
{
	int x = 10, y= 20;
	float a = 10.5, b = 25.8;
	double m = 45.7, n = 29.6;

	cout << "int add = " << add(x, y) << endl;

	cout << "float add = " << add(a,b) << endl;

	cout << "double add = " << add(m, n) << endl;

	return 0;
}
