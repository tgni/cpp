#include <iostream>
using namespace std;
int main(void)
{
        const double pi = 3.14;
        const double ai = 3.15;
        const double *cptr = &pi;

        cout << *cptr << endl;
        cptr = &ai;
        cout << *cptr << endl;

        double err = 0;
        double err2 = 1;
        double *const cptr2 = &err;
        //cptr2 = &err2; //error, cptr2 will always point to err;

        return 0;
}
