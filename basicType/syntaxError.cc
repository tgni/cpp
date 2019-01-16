/* 
 * FileName: syntaxError.cc
 * Description:
 * History:
 *	Dec 28, 2015	    Tgni	Create
 */
#include <iostream>

int area(int length, int width)
{
	return length * width;
}

int main()
{
	int s1 = area(7, 8);
	int s4 = area('7', '8');

	//std::cin >> int input_value;
	//std::cin >> input_value;
	//int i = { 3.14 };
	//double salary = wage = 9999.99;
	//int i = 3.14;

	return 0;
}
