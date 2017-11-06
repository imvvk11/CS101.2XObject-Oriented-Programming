// Main function of the C++ program.

#include <iostream>
using namespace std;
class base {
    public: int id; float balance;
    virtual void printInfo()
    {
        cout << "base \n";
    }
};
class savings : public base {
    public: int age; long int ATM;
    void printInfo(){
        cout << "savings \n";
    }
};
class current : public base {
    public: int amount, overdraft;
    void printInfo () {
        cout << "current \n";
    }
};
int main() {
    base b; savings s; current c;
    base *bptr;
    bptr = &s;
    bptr -> printInfo();
    bptr = &c;
    bptr -> printInfo();
    return 0;
}

/* Output:
savings
current
*/