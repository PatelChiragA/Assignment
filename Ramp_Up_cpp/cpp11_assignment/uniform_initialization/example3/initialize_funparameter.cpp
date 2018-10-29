#include <iostream>
using namespace std;

class A
{
	int a,b;

	public : A(int x, int y):a(x), b(y) {}

		 void show()
		 {
			 cout << " a = " << a << endl << " b = " << b << endl;
		 }
};

void fun(A x)
{
	x.show();
}

int main()
{
	
	// calling function and initializing it's argument 
	// using brace initialization
	fun({10, 20});
	return 0;
}
