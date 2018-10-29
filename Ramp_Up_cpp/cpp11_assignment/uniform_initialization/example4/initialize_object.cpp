#include <iostream>
using namespace std;

class A
{
	int a,b;

	//constructor
	public : A(int x, int y): a(x), b(y){}

		 void show()
		 {
			 cout << " a = " << a << endl << " b = " << b << endl;
		 }
};

A fun(int a, int b)
{
	// The compiler automatically 
	// deduces that the constructor 
	// of the class A needs to be called 
	// and the function parameters of f are 
	// needed to be passed here 
	return {a, b}; 
}

int main()
{
	A x = fun(10, 20);
	x.show();

	return 0;
}
