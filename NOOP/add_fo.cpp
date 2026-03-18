#include <iostream>
using namespace std;
int add(int, int);

int main()
{
	int a = 10, b =20;
	int c;
	c = add(a,b);
	float i = 10.321,j = 3.632;
	float sum = (float)add(i,j);
	cout << "i = "<< i << "j = " << j << endl;
//	cout << "sum of a and b is " << c<< endl;
	cout << "sum of i and j is " << sum<< endl;
	return 0;
}
int add(int x, int y)
{
	return x+y;
}
float add(float x, float y)
{
	return float(x+y);
}
