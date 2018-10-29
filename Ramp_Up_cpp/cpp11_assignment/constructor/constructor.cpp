#include<iostream>
using namespace std;

class A {

public:
	int a,b;

	// Default constructor
	A(){
		cout << "default construt0r \n";
		a = 10;
		b = 20;
	}


	// Parameterized Constructor
	A(int x, int y)
	{
		cout << "In parameterized constructor \n";
		a = x;
		b = y; 
	}

	void get_data(){
		cout << "a = " << a << " b = " << b << endl; 
	}

	A(A & obj){
		cout << "in copy constructor \n";
		a = obj.a;
		b = obj.b;
	}
};

int main()
{
//constructor called
A obj,obj1(100, 200), obj3 = obj1;

// Access values assigned by constructor 
obj.get_data();
obj1.get_data();
obj3.get_data();

return 0;
}



