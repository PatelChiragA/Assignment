#include <iostream>
#include <thread>

void thread_function()
{
	std::cout << "thread function \n";
}

int main()
{
	std::thread t(&thread_function);  // t starts running
	std::cout << "main thread \n";
//	t.join();  // main thread wait for the thread t to finish
	t.detach();
//	t.join(); // error
	if(t.joinable())
		t.join();

	return 0;
}
