#include <iostream>

using namespace std;

int main()
{
	cout << "Who goes with F\145rgus?\012";
	cout << 3.14e1L << endl;
	//cout << 1024f << endl; //error here
	cout << 1024.f << endl;
	cout << 3.14L << endl;

        return 0;
}
