#include <iostream>
using namespace std;

int demo_argc_argv(int argc, char* argv[])
{
    if(argc!=2){
        cout << "Вы забыли ввести свое имя.\n";
        return 1;
    }
    cout << "Привет, " << argv[1] << '\n';
    return 0;
}
