#include <iostream>
#include <cmath>
using namespace std;


int main()
{
    double summ = 0, el = 0;
    for(int n = 1; n < 11; ++n)
    {
        el = 1/(pow(n, 2) + pow(n, (1/3)));
        summ += el;
        cout << n << ")" << el << endl;
    }
    cout << "summ="<< summ << endl;
    return 0;
}
