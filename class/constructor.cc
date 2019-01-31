#include <iostream>

using namespace std;

struct Sales_data {
	int a;
	int b[10];

	Sales_data() {
		for (int i = 0; i < 10; ++i)
			b[i] = 0;
		a = 0;
	}

	Sales_data(int a) : Sales_data() {
		this->a++;
	}
};

/* if test is defined as global var, all int member elements will be zero as default. string is empty. */
//Sales_data test = Sales_data(1);

int main()
{
	/* if test is defined here, int will be random data, string is empty. */
	Sales_data test = Sales_data(1);; 
	
	cout << "after construction completed..." << endl;
	cout << test.a << endl;
	for (auto x : test.b)
		cout << x << endl;

	return 0;
}
