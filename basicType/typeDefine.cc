#include <iostream>
#include <string>

using namespace std;

string global_str;
int global_int;

int main()
{
	string local_str;
	int local_int;

	cout << global_str << endl; //
	cout << local_str << endl;
	cout << global_int << endl; // 0
	cout << local_int << endl;  // random number
#if 0
	cout << "Who goes with F\145rgus?\012";
	cout << 3.14e1L << endl;
	//cout << 1024f << endl; //error here
	cout << 1024.f << endl;
	cout << 3.14L << endl;
#endif
        return 0;
}
