#include<iostream>
using namespace std;

class A
{
	int arr[3];

	public : A(int x, int y, int z): arr{x, y, z}{};

		 void show()
		 {
			 for(int i=0; i<3; i++)
				 cout << *(arr + i) << endl;
		 }	

};

int main()
{

	A a(1, 2, 3);
	a.show();

	return 0;
}
