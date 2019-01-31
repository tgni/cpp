#include <iostream>

using namespace std;

struct apple {
	string color;

	void changeColor(string newColor) const {
		//color = newColor;	//error here! color cannot change
	}
};

int main()
{
	apple A;

	A.color = "red";
	cout << A.color << endl;

	A.changeColor("blue");
	cout << A.color << endl;

	return 0;
}
