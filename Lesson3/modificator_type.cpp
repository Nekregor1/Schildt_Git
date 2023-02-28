#include <iostream>
using namespace std;

/* Эта программа демонстрирует раличие между
 * signed- и unsigned- значениями целочисленного типа
*/

void modificator_type()
{
    short int i;        // короткое int-значение со знаком
    short unsigned int j;   // короткое int-значение без знака

    j = 60000;
    i = j;
    cout << i << " " << j << "\n";
}
