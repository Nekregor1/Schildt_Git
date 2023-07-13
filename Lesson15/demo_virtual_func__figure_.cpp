#define _USE_MATH_DEFINES

#include <iostream>
#include <QTextCodec>
#include <math.h>
#include <cmath>
using namespace std;

class figure {
protected:
    double m_x, m_y;
public:
    void set_dim(double i, double j) {
        m_x = i;
        m_y = j;
    }
    virtual void show_area() {
        cout << QString::fromUtf8("Для этого класса выражение вычисления ").toLocal8Bit().data();
        cout << QString::fromUtf8("площади не определено.\n").toLocal8Bit().data();
    }
};

class triangle: public figure {
public:
    void show_area() {
        cout << QString::fromUtf8("Треугольник с высотой ").toLocal8Bit().data();
        cout << m_x;
        cout << QString::fromUtf8(" и основанием ").toLocal8Bit().data();
        cout << m_y;
        cout << QString::fromUtf8(" имеет площадь ").toLocal8Bit().data();
        cout << m_x * m_y / 2 << '\n';
    }
};

class rectangle: public figure {
public:
    void show_area() {
        cout << QString::fromUtf8("Прямоугольник с размерами ").toLocal8Bit().data();
        cout << m_x;
        cout << QString::fromUtf8(" x ").toLocal8Bit().data();
        cout << m_y;
        cout << QString::fromUtf8(" имеет площадь ").toLocal8Bit().data();
        cout << m_x * m_y << '\n';
    }
};

class cirle: public figure {
public:
    void show_area() {
        cout << QString::fromUtf8("Круг с радиусом ").toLocal8Bit().data();
        cout << m_x;
        cout << QString::fromUtf8(" имеет площадь ").toLocal8Bit().data();
        cout << round(m_x * m_x * M_PI*100)/100 << '\n';
    }
};

void demo_virtual_func__figure_()
{
    figure *p;      // создаем указатель на базовый тип

    // создаем объекты производных классов
    triangle t;
    rectangle r;
    cirle c;

    vector< figure *> temp;
    temp.push_back(&t);
    temp.push_back(&r);
    temp.push_back(&c);

    for(int count=0; count<int(temp.size()); count++) {
        p = temp[count];
        p->set_dim(10, 5);
        p->show_area();
    }
//    p = &t;
//    p->set_dim(10, 5);
//    p->show_area();

//    p = &r;

}
