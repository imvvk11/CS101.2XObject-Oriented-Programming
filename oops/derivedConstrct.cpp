// Main function of the C++ program.

#include <iostream>
using namespace std;
class base {
    public: int id;
    float balance;
    char name[];
    base(){
        cout << "Default constructor: base \n" ;
        id = 0;
        balance = 0.0;
    };
    void printInfo () {
        cout << "Printing in base: \n" ;
        cout << id << ", " << balance << "\n";
    }
};
class savings : public base {
    public: int age;
    long int ATM;
    savings(int x, int y): age(x), ATM(y){
        cout << "Derived constructor";
    }
    void printInfo () {
        cout << "\nPrinting in savings: \n" ;
        cout << age << ", " << ATM << endl ;
    }
};
int main() {
    base ac1;
    ac1.printInfo();
    int age = 20;
    int ATM = 240;
    savings ac2(age, ATM);
    ac2.printInfo();
    return 0;
}

/* Output:
Default constructor: base
Printing in base:
0, 0
Default constructor: base
Derived constructor
Printing in savings:
20, 240
*/