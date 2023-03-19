#include <iostream>
#include <ctime>
//#include <time.h>
#include <QTextCodec>
using namespace std;

void demo_index_to_struct()
{
  struct tm *ptr;
  time_t lt;

  lt = time(NULL);

  ptr = localtime(&lt);

  cout << ptr->tm_hour << ':' << ptr->tm_min;
  cout << ':' << ptr->tm_sec << '\n';

  cout << asctime(ptr) << '\n';

}
