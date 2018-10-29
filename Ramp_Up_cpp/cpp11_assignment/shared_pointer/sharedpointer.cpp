#include <memory>
#include <iostream>

using namespace std;

class Foo {
	public:
	Foo() { cout << "Foo...\n"; }
	~Foo() { cout << "~Foo...\n"; }
};

class D { 
	public:
	void operator()(Foo* p) const {
		cout << "Call delete from function object...\n";
		delete p;
	}
};

int main()
{
	{
		cout << "constructor with no managed object\n";
		shared_ptr<Foo> sh1;
	}

	{
		cout << "constructor with object\n";
		shared_ptr<Foo> sh2(new Foo);
		shared_ptr<Foo> sh3(sh2);
		cout << sh2.use_count() << '\n';
		cout << sh3.use_count() << '\n';
	}

	{
		cout << "constructor with object and deleter\n";
		shared_ptr<Foo> sh4(new Foo, D());
		shared_ptr<Foo> sh5(new Foo, [](Foo *p) {
				cout << "Call delete from lambda...\n";
				delete p;
				});
		
	} 
}
