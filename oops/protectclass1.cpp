// Main function of the C++ program.

#include <iostream>
#include<cmath>
using namespace std;

class B {
    private: int m1;
    public: int m2;
    protected: int m3;
    public: void k(){
        cout << "Enter the values of m1, m2 ,m3: ";
        cin >> m1;
        cin >> m2;
        cin >> m3;
    }
    void setm1(int x) { m1 = x; }
    void l() {
        cout << "\nm1: " << m1;
        cout << "\nm2: " << m2;
        cout << "\nm3: " << m3;
    }
};
class D1:
public B {
    private: int x1;
    public: int x2;
    protected: int x3;
    public: void f1(){
        cout << "Enter the values of x1, x2. x3: ";
        cin >> x1;
        cin >> x2;
        cin >> x3;
    }
    void g1() {
        cout << "\nx1: " << x1;
        cout << "\nx2: " << x2;
        cout << "\nx3: " << x3;
    }
};
int main () {
    D1 d1;
    d1.f1 ();
    d1.k ();
    d1.setm1(1);
    d1.m2 = 1;
    d1.l();
    d1.g1();
    return 0;
}

/* Test case 1:
Enter the values of x1, x2. x3: 84
38
58
Enter the values of m1, m2 ,m3: 37
86
84

Expected Output for Test case 1:
m1: 1
m2: 1
m3: 84
x1: 84
x2: 38
x3: 58

Test case 2:
Enter the values of x1, x2. x3: 75
47
48
Enter the values of m1, m2 ,m3: 83
49
38

Expected Output for Test case 2:
m1: 1
m2: 1
m3: 38
x1: 75
x2: 47
x3: 48
*/