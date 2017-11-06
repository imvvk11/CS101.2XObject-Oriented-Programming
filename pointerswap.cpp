#include<iostream>
using namespace std;

int main() {
    int m,n;
    int *ptrInt;
    int **ptrptrInt;
    ptrptrInt = &ptrInt;
    cout<<"Give value of m and n: ";
    cin >> m >>n;

    ptrInt = &m; cout << *(*ptrptInt) << endl;
    ptrInt = &n; cout << *(*ptrptrInt) << endl;
    return 0;

}
