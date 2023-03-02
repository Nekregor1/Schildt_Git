#include <iostream>
using namespace std;

int demo_argv_index(int argc, char* argv[]){

    int t, i;
    for (t=0; t<argc; ++t){
        i = 0;
        while (argv[t][i]) {
            cout << argv[t][i];
            ++i;
        }
        cout << ' ';
    }
    cout << '\n';
    return 0;
}
