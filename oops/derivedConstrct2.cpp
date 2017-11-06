// Main function of the C++ program.

#include <iostream>
#include<cstring>
using namespace std;

class base {
    public:
    int id;
    float balance;
    char name[];
    base(int a){         // constructor with argument
        cout << "Constructor:base \n";
        id = a;
        balance = 0.0;
    }
    void printInfo(){
        cout << "Printing in base:\n" ;
        cout << id << ", " << balance << endl;
    }
};
class savings : public base {
    public: int age;
    long int ATM;
    savings( int x, int y,int z): base(x),age(y), ATM(z) {
        cout << "Derived constructor ";
    }
    void printInfo() {
        cout << "\nPrinting in savings: \n";
        cout << age << ", " << ATM << endl;
    }
};


int main() {
    base ac1(1);
    ac1.printInfo();
    int id = 10, age = 20;
    int ATM  = 240;
    savings ac2(id, age , ATM);
    ac2.printInfo();
    return 0;
}

/* Output:
Constructor:base
Printing in base:
1, 0
Constructor:base
Derived constructor
Printing in savings:
20, 240
*/