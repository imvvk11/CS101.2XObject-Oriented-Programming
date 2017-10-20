#include<iostream>
using namespace std;

int main() {

    int a; float b; char c;
    int *ptrA; float *ptrB; char *ptrC;

    ptrA = &a; ptrB = &b; ptrC = &c;
    cout << "Address of a is: "<< ptrA<<endl;
    cout << "Address of b is: "<< ptrB<< endl;
    cout << "Address of c is: "<< ptrC<<endl;
    return 0;

}

/*
output :
Address of a is: 0x7ffd2012c610
Address of b is: 0x7ffd2012c614
Address of c is:
*/
