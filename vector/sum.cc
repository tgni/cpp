#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;

	while (cin >> n) {
		vector<int> vec;
		int d;

		for (int i = 0; i < n; ++i) {
			cin >> d;
			vec.push_back(d);
		}

		cout << "adjacent sum is :";
		for (decltype(vec.size()) i = 1; i < vec.size(); ++i) {
			cout << vec[i] + vec[i-1] << " ";
		}
		cout << endl;

		cout << "first and last sum is :";
		for (decltype(vec.size()) i = 0; i < vec.size() / 2; ++i) {
			cout << vec[i] + vec[vec.size()-1-i] << " ";
		}
		if (n % 2)
			cout << vec[vec.size()/2] + vec[vec.size()/2] << " ";
		cout << endl;
	}

	return 0;
}
