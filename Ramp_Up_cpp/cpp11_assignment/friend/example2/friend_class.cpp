#include <iostream>
using namespace std;

class B;
class A
{
	private: int x;
		 int y;

	public: void set()
		{
			x = 10;
			y = 20;
		}
		void get()
		{
			cout << " x = " << x << endl << " y = " << y << endl;
		}

		friend class B;
};

class B
{
public: void print(A obj1)
	{
		cout << " After class B print function \n";
		cout << obj1.x << endl << obj1.y << endl;
	}

	void modify(A &obj1)
	{
		obj1.x = obj1.x + 100;
		obj1.y = obj1.y + 100;
	}
};

int main()
{
	A a1;
	B b1;

	a1.set();
	a1.get();

	b1.print(a1);
	b1.modify(a1);
	cout << "After modification \n";
	a1.get();
	return 0;
}
