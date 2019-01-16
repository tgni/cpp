#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
	cout << "bool " << sizeof(bool) << endl;
	cout << "char " << sizeof(char) << endl;
	cout << "wchar_t " << sizeof(wchar_t) << endl;
	cout << "char16_t " << sizeof(char16_t) << endl;
	cout << "char32_t " << sizeof(char32_t) << endl;
	cout << "short int " << sizeof(short int) << endl;
	cout << "int " << sizeof(int) << endl;
	cout << "long " << sizeof(long) << endl;
	cout << "long long " << sizeof(long long) << endl;
	cout << "float " << sizeof(float) << endl;
	cout << "double " << sizeof(double) << endl;
	cout << "long double " << sizeof(long double) << endl;

	cout << "L'a' " << sizeof(L'a') << endl;		//4
	cout << "a " << sizeof("a") << endl;			//2
	cout << "L\"a\" " << sizeof(L"a") << endl;		//8

	return 0;
}
