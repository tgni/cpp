#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;

	while (getline(cin, s)) {
		for (auto &c : s) {
			c = 'X';
		}

		/*
		for (decltype(s.size()) i = 0; i < s.size(); ++i) {
			s[i] = 'X';
		}

		decltype(s.size()) i = 0;
		while (s[i] != '\0')
			s[i++] = 'X';
		*/

		cout << s << endl;
	}

	return 0;
}
