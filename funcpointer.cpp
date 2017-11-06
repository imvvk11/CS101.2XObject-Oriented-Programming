#include<iostream>
using namespace std;
int *myFunc(int *ptrB);
int main() {
    int *a, b;

    cout << "Give value of b: "; cin >> b;
    a = myFunc(&b);
    cout << "a is: "<< *a << endl;
    return 0;

}

int *myFunc(int *ptrB) {

    int a;
    a = (*ptrB) * (*ptrB);
    *ptrB = a;
    return (ptrB);
}