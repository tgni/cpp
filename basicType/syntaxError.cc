/* 
 * FileName: syntaxError.cc
 * Description:
 * History:
 *	Dec 28, 2015	    Tgni	Create
 */

int area(int length, int width)
{
	return length * width;
}

int main()
{
	int s1 = area(7, 8);
	int s2 = area(7, 8);
	int s3 = area(7, 8);
	int s4 = area('7', '8');
	return 0;
}
