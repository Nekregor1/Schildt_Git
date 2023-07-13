#include <iostream>
#include <QTextCodec>
using namespace std;

class cl {
    int i;
    int j;
public:
    void load_i(int val) {
        this->i = val;
    }
    int get_i() {
        return this->i;
    }
    void load_j(int val){
        j = val;
    }
    int get_j(){
        return j;
    }
};

void demo_key_word_this()
{
    cl o;
    o.load_i(100);

    cout << o.get_i() << '\n';

    o.load_j(50);
    cout << o.get_j() << '\n';

}
