#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vec;
	string s;

	while (cin >> s) {
		if (s == "break")
			break;
		vec.push_back(s);
	}

	for (auto s : vec)
		cout << s << " ";
	cout << endl;

	for (auto &s : vec) {
		for (auto &c : s) {
			c = toupper(c);
		}
	}

	for (auto s : vec)
		cout << s << " ";
	cout << endl;

	return 0;
}
