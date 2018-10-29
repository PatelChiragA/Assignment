#include<iostream>
using namespace std;

int foo (int x)
{
	cout << "in foo function \n";
	return x;
}

int main()
{
	int (*fun_pointer)(int) = foo; // assign fun_pointer to function foo

	(*fun_pointer)(5);  // call function foo through fun_pointer

	fun_pointer(5); // call function foo through fun_pointer

	return 0;
}
