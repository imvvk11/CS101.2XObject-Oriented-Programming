// Main function of the C++ program.

#include <iostream>
using namespace std;
class base {
    public: int id;
    base(int x): id(x){
    }
    base & operator = (base &a){
        id = a.id;
        cout << "base class operator \n" ;
        return *this;
    }
};
class savings : public base {
    public: int age;
    savings(int x, int y):base(x),age(y) {
    }
};
int main() {
    base b1(10);
    savings s1(11,20), s2(12,30);
    b1 = s1;
    cout << b1.id << '\n';
    b1 = s2;
    cout << b1.id;
    return 0;
}

/* Output:
base class operator
11
base class operator
12
*/