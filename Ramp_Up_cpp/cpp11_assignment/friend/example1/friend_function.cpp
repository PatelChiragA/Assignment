#include <iostream>
using namespace std;

class A
{
	private : int x;
		  int y;

	public: void init_data()
		{
			x = 10;
			y = 20;
		}
		void print()
		{
			cout << " x = " << x << endl << " y = " << y << endl;
		}

		friend void outsidefun1(A);  // only this function is permission to access data
};

void outsidefun1 (A obj1)	// permission granted
{
	cout << " obj1.x = " << obj1.x << endl << " obj1.y = " << obj1.y << endl;
}

/*void outsidefun2(A obj2)     // no permission
{
	cout << " obj2.x = " << obj2.x << endl << " obj2.y = " << obj2.y << endl;
}
*/

int main()
{
	A a1;
	a1.init_data();
	a1.print();

	outsidefun1(a1);

	return 0;
}
