// Ошибка, генерируемая при возврате объекта из функции
#include <iostream>
#include <cstring>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class sample {
    char *m_s;
public:
    sample();                       // Обычный конструктор
    sample(const sample &ob);       // Создание копии
    ~sample() {
        if(m_s)
            delete [] m_s;
        cout << QString::fromUtf8("Освобождение s-памяти.\n").toLocal8Bit().data();
    }
    void show() {
        cout << m_s << '\n';
    }
    void set(char *str);
    sample operator=(sample ob);   // перегруженный оператор присваивания
};

// Обычный конструктор
sample::sample()
{
    m_s = new char('\0');       // Член m_s указывает на null-строку
}

// Конструктор копии
sample::sample(const sample &ob)
{
    m_s = new char[strlen(ob.m_s)+1];
    strcpy(m_s, ob.m_s);
}

// Загрузка строки
void sample::set(char *str)
{
    m_s = new char[strlen(str) +1];
    strcpy(m_s, str);
}

// Перегрузка оператора присваивания
sample sample::operator=(sample ob)
{
    /* Если выделенная область памяти имеет недостаточный размер,
     * выделяется новая область памяти. */
    if(strlen(ob.m_s) > strlen(m_s)) {
        delete [] m_s;
        m_s = new char[strlen(ob.m_s)+1];
    }
    strcpy(m_s, ob.m_s);
    return *this;
}

// Эта функция возвращает объект типа sample
sample input()
{
    char instr[80];
    sample smp;
    cout << QString::fromUtf8("Введите строку: ").toLocal8Bit().data();
    cin >> instr;

    smp.set(instr);
    return smp;
}


void demo_oper_assignment()
{
    sample ob;

    // Присваиваем объект, возвращаемый
    // функцией input(), объекту ob

    ob = input();
    ob.show();
}






