#include <iostream>

using namespace std;

int main()
{
	string a, b;

	while (cin >> a >> b) {
#if 0
		if (a > b)
			cout << a << endl;
		else if (a < b)
			cout << b << endl;
#endif
		if (a.size() > b.size()) {
			cout << a << endl;
		} else if (a.size() < b.size()) {
			cout << b << endl;
		}
	}

	return 0;
}
