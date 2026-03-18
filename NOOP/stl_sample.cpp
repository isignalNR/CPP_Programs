#include <iostream>
#include <array>
#include <vector>
using namespace std;

void process_array(std::array<int, 5>& arr) { 
	cout << "Processing array" << endl;
	/* ... */ }
void process_vector(std::vector<int>& vec) { 
	
	cout << "Processing vector" << endl;
	/* ... */ }


int main()
{

	// Usage:
	std::array<int, 5> a;
	process_array(a); // Simple reference syntax

	std::vector<int> v;
	process_vector(v); // Simple reference syntax
	return 0;
}

