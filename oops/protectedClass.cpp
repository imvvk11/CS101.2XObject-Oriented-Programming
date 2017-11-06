// Main function of the C++ program.

#include <iostream>
using namespace std;

class B {
    private: int m1;
    public: int m2;
    protected: int m3;
    public: void g1() {
        cout << "h";
    }
    void l(){
        cout << "\nm1: " << m1;
        cout << "\nm2: " << m2;
        cout << "\nm3: " << m3;
    }
    protected: void g2(){
        cout << "\nEnter the values of m1, m2, m3:";
        cin >> m1;
        cin >> m2;
        cin >> m3;
    }
};

class D1: public B {
    private :  int x1;
    public:    int x2;
    protected: int x3;
    public : void f1() {
        g1();
        g2();
    }
    void m() {
        cout << "\nx1: " << x1;
        cout << "\nx2: " << x2;
        cout << "\nx3: " << x3;
    }
    protected: void f2(){
        cout << "\nEnter the the values of x1, x2, x3:";
        cin >> x1;
        cin >> x2;
        cin >> x3;
    }
};
class D2:  protected  D1 {
    private: int y1;
    public:  int y2;
    protected: int y3;
    public: void h1 (){
        g1();
        g2();
        f1();
        f2();
    }
    void k() {
        l();
        m();
    }
    protected: void h2() {
        g1();
        g2();
        f1();
        f2();
    }
};
int main () {
    B b;
    //b.g2();
    D1 d1;
    d1.g1();
    d1.f1();
    cout << "\nValues of d1:";
    d1.l();
    d1.m();
    //d1.f2();
    D2 d2;
    //d2.g1();
    d2.h1();
    //d2.h2();
    cout << "\nValues of d2:";
    d2.k();
    return 0;
}

/*
Test case 1:
hh
Enter the values of m1, m2, m3:4
34
34

Values of d1:
m1: 4
m2: 34
m3: 34
x1: 0
x2: 2
x3: 0h
Enter the values of m1, m2, m3:34
51
51
h
Enter the values of m1, m2, m3:51
1
64

Enter the the values of x1, x2, x3:64
1
51

Values of d2:
m1: 51
m2: 1
m3: 64
x1: 64
x2: 1
x3: 51

Test case 2:
hh
Enter the values of m1, m2, m3:65
65
6

Values of d1:
m1: 65
m2: 65
m3: 6
x1: 0
x2: 2
x3: 0h
Enter the values of m1, m2, m3:2
65
65
h
Enter the values of m1, m2, m3:62
32
5

Enter the the values of x1, x2, x3:32
23
23

Values of d2:
m1: 62
m2: 32
m3: 5
x1: 32
x2: 23
x3: 23
*/
