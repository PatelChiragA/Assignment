//stack operation first in last out
#include <iostream>
using namespace std;

template <class T>
class stack
{
	private: T stk[5];
		 int top;

	public: stack()
		{
			top = -1;
		}
		void push(T item)
		{
			top++;
			stk[top] = item;
			cout << item << " inserted " << endl;
		}
		T pop();
		void show();
};

	template <class T>     // this is mandatory
T stack <T>::pop()
{
	T item;
	item = stk[top];
	top--;
	cout << item << " poped " << endl;
	return item;
} 

	template <class T>
void stack<T>::show()
{
	if(top == -1)
		cout << " \n stack is empty " << endl;
	else
	{
		cout << "stack elements: \n";

		for(int i = top; i >= 0; i--)
			cout << stk[i] << endl; 
	}
}

int main()
{
	stack<int> int_stack;

	int_stack.push(10);
	int_stack.push(20);
	int_stack.push(30);
	int_stack.push(40);
	cout << "After push operation \n";
	int_stack.show();

	int_stack.pop();
	int_stack.pop();
	cout << "After pop operation \n";
	int_stack.show();



	cout << "****************************" << endl;

	stack<char> char_stack;

	char_stack.push('a');
	char_stack.push('b');
	char_stack.push('c');
	char_stack.push('d');
	char_stack.show();


	char_stack.pop();
	char_stack.pop();
	cout << "After pop operation \n";
	char_stack.show();

	return 0;
}
