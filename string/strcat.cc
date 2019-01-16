#include <iostream>

using namespace std;

int main()
{
	string s, result;

	cout << "Pls input first string." << endl;
	while (cin >> s) {
#if 0
		if (!result.size()) {
			result += s;
		} else {
			result += " " + s;
		}
#endif
		result += s;
		cout << "Yes or No?" << endl;
		
		char cont = 'y';
		cin >> cont;
		if (cont == 'y' || cont == 'Y')
			cout << "Pls input another string." << endl;
		else
			break;
	}

	cout << "result is " << result << endl;

	return 0;
}
