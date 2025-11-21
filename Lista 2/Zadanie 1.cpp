#include <iostream>
#include <math.h>
#include <iomanip>

using namespace std;

int main()
{
    for (int i=1;i<=11;i++)
    {
        cout << setprecision(i) << M_PI << endl;
    }
    return 0;
}