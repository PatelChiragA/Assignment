#include<iostream>
using namespace std;

class A
{
	private: int i;
	public: int j;
};

class B: public A
{
	private: int k;
};

int main()
{
	A a1;   // base class member
	B b1;   // base class + derived class member

	cout << "sizeof base class = " << sizeof(a1) << endl;
	cout << "sizeof derive class = " <<sizeof(b1) << endl;

	return 0;
}
