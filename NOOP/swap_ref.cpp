#include <bits/stdc++.h>
using namespace std;

// Swap function
void swap(int &a, int &b) {
    int temp;
    temp = b;
    b = a;
    a = temp;
}

int main() {
    int x = 3, y = 7;

    // Before swapping
    cout << "Before Swapping: " 
       << endl;
    cout << "x: " << x << " y: " 
       << y << endl;

    // Call the function
    swap(x, y);

    // After swapping
    cout << "After Swapping: " 
       << endl;
    cout << "x: " << x << " y: " 
       << y;
    return 0;
}
