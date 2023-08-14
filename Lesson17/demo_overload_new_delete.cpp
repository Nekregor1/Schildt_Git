// Демонстрация перегруженных операторов new и delete
#include <iostream>
#include <new>
#include <cstdlib>
#include <QTextCodec>
using namespace std;

class three_d {
    int x, y, z;        // 3-мерные координаты
public:
    three_d() {
        x = y = z = 0;
        cout << QString::fromUtf8("Создание объекта (0 0 0).\n").toLocal8Bit().data();
    }
    three_d(int i, int j, int k) {
        x = i;
        y = j;
        z = k;
        cout << QString::fromUtf8("Создание объекта (\n").toLocal8Bit().data();
        cout << i << ' ';
        cout << j << ' ';
        cout << k << ").\n";
    }
    ~three_d() {
        cout << QString::fromUtf8("Разрушение объекта.\n").toLocal8Bit().data();
    }
    void *operator new(size_t size);
    void *operator new[](size_t size);
    void operator delete(void *p);
    void operator delete[](void *p);
    void show();
};

// Перегрузка оператора new для класса three_d
void *three_d::operator new(size_t size)
{
    void *p;
    cout << QString::fromUtf8("Выделение памяти для объекта класса three_d.\n").toLocal8Bit().data();
    p = malloc(size);

    // Генерирование исключения в случае неудачного выделения памяти
    if(!p) {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

// Перегрузка оператора new для массива объектов
// типа three_d
void *three_d::operator new[](size_t size)
{
    void *p;
    cout << QString::fromUtf8("Выделение памяти для массива three_d-объектов.\n").toLocal8Bit().data();

    // Генерирование исключения при неудаче
    p = malloc(size);
    if(!p) {
        bad_alloc ba;
        throw ba;
    }
    return p;
}

// Перегрузка оператора delete для класса three_d
void three_d::operator delete(void *p)
{
    cout << QString::fromUtf8("Удаление объекта класса three_d.\n").toLocal8Bit().data();
    free(p);
}

// Перегрузка оператора delete для массива объектов типа three_d
void three_d::operator delete[](void *p)
{
    cout << QString::fromUtf8("Удаление массива объектов типа three_d.\n").toLocal8Bit().data();
    free(p);
}

// Отображение координат X, Y, Z
void three_d::show()
{
    cout << x << " ";
    cout << y << " ";
    cout << z << "\n";
}

void demo_overload_new_delete()
{
    three_d *p1, *p2;

    try {
        p1 = new three_d[3];        // выделение памяти для массива
        p2 = new three_d(5, 6, 7);  // выделение памяти для объекта
    }
    catch (bad_alloc ba) {
        cout << QString::fromUtf8("Ошибка при выделение памяти.\n").toLocal8Bit().data();
        return;
    }
    p1[1].show();
    p2->show();

    delete [] p1;
    delete p2;
}
