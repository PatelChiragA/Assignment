#include <iostream>

using namespace std;

int main()
{
	int *ptr = new int[5]{1, 2, 3, 4, 5};

	for(auto i =0; i<5 ; i++)
		cout << *(ptr + i) << endl;

	return 0;
}
