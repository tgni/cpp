#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;

	while (getline(cin, s)) {
		string result;
		for (auto c : s) {
			if (!ispunct(c))
				result += c;
		}

		cout << result << endl;
	}

	return 0;
}
