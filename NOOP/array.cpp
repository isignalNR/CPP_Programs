#include <iostream>
using namespace std;
//C++ 11 way of using for loop
int main()
{
	int arr[] = { 10,40,30,50, 60, 70};
	for(int x:arr)
		cout << x << " ";
	return 0;
}
