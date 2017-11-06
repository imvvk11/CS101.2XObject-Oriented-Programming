// Main function of the C++ program.
// Main function of the C++ program.

#include <iostream>
using namespace std;
class base {
    public: int id; float balance;
    void call() {
        cout << "base call\n";
    }
    virtual void printInfo()
    {
        cout << "base \n";
    }
};
class savings : public base {
    public: int age; long int ATM;
    void call(){
        cout << "savings call \n";
    }
    void printInfo(){
        cout << "savings \n";
    }
};
class current : public base {
    public: int amount, overdraft;
    void call(){
        cout << "Current call \n";
    }
    void printInfo () {
        cout << "current \n";
    }
};
int main() {
    base b; savings s; current c;
    base *bptr;
    bptr = &s;
    bptr -> call();
    bptr -> printInfo();
    bptr = &c;
    bptr -> call();
    bptr -> printInfo();
    return 0;
}

/* Output:
base call
savings
base call
current
*/