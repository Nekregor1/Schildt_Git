// Пример флагов форматирования
#include <iostream>
#include <bitset>
#include <string>
using namespace std;

void showflags(ios::fmtflags f);
bitset<15> toBinary(int n);
string showBinary(int n);

void demo_format()
{
    ios::fmtflags f;
    f = cout.flags();
    cout << f << ' ' << typeid(f).name() << '\n';
    showflags(f);


    cout.setf(ios::showpos);
    cout.setf(ios::scientific);

    f = cout.flags();
    cout << f << ' ' << typeid(f).name() << '\n';
    showflags(f);

    cout.unsetf(ios::scientific);

    f = cout.flags();
    cout << f << ' ' << typeid(f).name() << '\n';
    showflags(f);

//    cout << toBinary(4000) << '\n';
    cout << int(0x4000) << ' ' << showBinary(int(0x4000)) << '\n';
}

void showflags(ios::fmtflags f)
{
    long i;
    for(i=0x4000; i; i = i >> 1)
        if(i & f)
            cout << "1 ";
        else
            cout << "0 ";
    cout << "\n";
};

bitset<15> toBinary(int n)
{
    return bitset<15>(n);
}

string showBinary(int n)
{
    string res;
    int len = 15;
    for (unsigned i = (1 << (len - 1)); i>0; i=i/2){
        res += (n & i) ? "1 " : "0 ";
    }
    return res;
}
