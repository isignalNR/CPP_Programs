#include <iostream>
using namespace std;

template<typename T, std::size_t S>
void my_func(T (&arr)[S]) { // reference to any array
    std::cout << "The array has " << S << " elements\n"; // N is the size
}

int main()
{
	// Usage:
	int data[] = {1, 2, 3};
	my_func(data); // Compiler deduces T as int and S as 3	
	for(int a:data)
		cout << a << endl;

	float data1[] = { 1.2, 3.4, 5.4, 3.1, 4.2};
	my_func(data1); // Compiler deduces T as int and S as 3	
	for(int a1:data1)
		cout << (float)a1 << endl;

	return 0;
}

