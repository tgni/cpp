#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> vec;
	int d;

	while (cin >> d) {
		vec.push_back(d);
		for (auto c : vec) {
			cout << c << " ";
		}
		cout << endl;
	}

	return 0;
}
