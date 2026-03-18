#include <iostream>
using namespace std;

class SAMPLE
{
	private:
		int k;
		int c;
	public:
		SAMPLE()
		{
			k = 10;
			c = 20;
		}
		void display()
		{
			cout << " Inside Display Function " << endl;
			cout << "k = " << k << " c = " <<  c << endl;
		}
};

int main()
{
	SAMPLE s; // k , c are initialized, already ctr called
	s.display();
	return 0;
}

