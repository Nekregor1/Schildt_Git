#include <iostream>
#include "factorial_ex.h"
using namespace std;

void factorial_main()
{
    int num;
    cin >> num;
    int result = factorial_ex(num);
    cout << "result = " << result << endl;
}
