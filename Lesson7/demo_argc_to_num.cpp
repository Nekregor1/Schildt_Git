#include <iostream>
#include <cstdlib>
using namespace std;

int demo_argc_to_num(int argc, char* argv[]){

    double a, b;

    if (argc!=3) {
        cout << "Использование: add число число\n";
        return 1;
    }
    a = atof(argv[1]);
    b = atof(argv[2]);

    cout << a + b << '\n';
}
