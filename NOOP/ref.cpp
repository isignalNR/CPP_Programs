#include <iostream>
using namespace std;

int main()
{
	int i = 10;
	int &j = i;
	cout << i << " " << j << endl;
	j = 30;
	cout << i << " " << j << endl;
	int &k = j;
	//k =j;
	cout << i << " " << k << endl;
	i = k+2;
	cout << i << " " << j << " "  << k << endl;
	return 0;
}

// int &&k; // references
// int **p;

