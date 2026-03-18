#include <iostream>
using namespace std;

int add( int x, int y)
{
	cout << "inside int add" << endl;
	return x+y;
}

//float add(float x, float y)
float add(float x, float y = 32.34)
{
	cout << "inside float add" << endl;
	return x+y;
}
double add(double x, double y)
{
	cout << "inside double add" << endl;
	return x+y;
}

int main()
{
	cout << add(10,20) << endl;
	//cout << add(11.20,20.32) << endl;
	cout << add(11.20) << endl;
	cout << add(10.32143,20.43543) << endl;
	return 0;
}
