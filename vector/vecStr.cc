#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<string> vec;
	string s;

	while (cin >> s) {
		vec.push_back(s);
		for (auto s : vec) {
			cout << s << " ";
		}
		cout << endl;
	}

	return 0;
}
