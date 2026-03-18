// CPP code to illustrate the pointer reinterpret
#include <iostream>
using namespace std;

class A {
public:
    virtual void fun_a()
    //void fun_a()
    {
        cout << " In class A\n";
    }
};

class B : public A{
public:
    void fun_a() // executes because virtual makes overriding works at run time
    {
        cout << " In class B\n";
    }
};

int main()
{
	A *x = new B(); //pointer object
	x->fun_a();
	A b = B();
	b.fun_a(); // simple object
	return 0;

}
