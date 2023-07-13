#include <iostream>
#include <cstring>
#include <QTextCodec>
using namespace std;

class str_type {
    char m_string[80];
public:
    str_type(char *str = "") {
        strcpy(m_string, str);
    }
    str_type operator+(str_type str);       // конкатенация объектов str_type
    str_type operator+(char *str);          // конкатенация объекта str_type со строкой с завершающим нулём
    str_type operator=(str_type str);       // присваивание объекта str_type другому
    str_type operator=(char *str);          // присваивание объекту str_type строки с завершающим нулем

    void show_str() {
        cout << QString::fromUtf8(m_string).toLocal8Bit().data();
    }
};

// Конкатенация двух объектов класса str_type
str_type str_type::operator+(str_type str)
{
    str_type temp;
    strcpy(temp.m_string, m_string);
    strcat(temp.m_string, str.m_string);
    return temp;
}

// Конкатенация объекта класса str_type со строкой с завершающим нулем
str_type str_type::operator+(char *str)
{
    str_type temp;
    strcpy(temp.m_string, m_string);
    strcat(temp.m_string, str);
    return temp;
}

// Присваивание одного объекта класса str_type другому
str_type str_type::operator=(str_type str)
{
    strcpy(m_string, str.m_string);
    return *this;
}

// Присваивание строки с завершающим нулем объекту типа str_type
str_type str_type::operator=(char *str)
{
    str_type temp;
    strcpy(m_string, str);
    strcpy(temp.m_string, m_string);
    return temp;
}

void demo_overload_str()
{
//    str_type a_str("dfghjk"), b_str("fdsa"), c_str;
    str_type a_str, b_str, c_str;
    a_str = "ghbdtn dctv";
    b_str = " Vfhecz";
    c_str = a_str + b_str;
    c_str = a_str + " " + c_str;

    c_str.show_str();
    cout << '\n';
}
