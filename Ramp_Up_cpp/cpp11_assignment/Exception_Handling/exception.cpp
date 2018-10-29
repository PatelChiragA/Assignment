#include <iostream>
using namespace std;

int divition(int a, int b)
{
	if(b == 0)
		throw " divied by zero invalid operation ";
	else
		return (a/b);
}

int main()
{
	int a,b;
	int ret;

	cout << "Enter the value a and b " << endl;
	cin >> a >> b;

	try
	{
		ret = divition(a, b);
		cout << ret << endl;
	} 
	catch(const char *p)
	{
		cout << "in handler " << endl;
		cout << p << endl;
	}
	cout << "After catch block code " << endl;

	return 0;
}
