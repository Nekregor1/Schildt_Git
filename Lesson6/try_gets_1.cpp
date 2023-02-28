#include <iostream>
#include <string>
#include <cstring>
#include <typeinfo>
using namespace std;

void try_gets_1()
{
    /*string name;
    char str[80];
    cout << "Введите имя: ";
    getline(cin, name);

    cout << "Ваше имя: " << name << '\n';
    */
//    string str = "some string" ;
//    char *cstr = &str[0];
//    cout << cstr << typeid (cstr).name() << '\n';
//    cout << str << typeid (str).name() << '\n';

//    vector<char> cstr(str.c_str(), str.c_str() + str.size() + 1);
    string temp = "Строка для обработки";
    char * tab2 = new char [temp.length()+1];
    strcpy (tab2, temp.c_str());
    cout << tab2 << ' ' << typeid (tab2).name() << " Это должен быть массив символов char[]" << '\n';
    cout << temp << ' ' << typeid (temp).name() << " Это должна быть строка string" << '\n';
    cout << tab2[0];
}
