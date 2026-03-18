#include <iostream>
using namespace std;

int main()
{
	double d = 3.14159;
// Explicitly converting double to int
int i = static_cast<int>(d);
	cout << i << endl;
	return 0;
}
