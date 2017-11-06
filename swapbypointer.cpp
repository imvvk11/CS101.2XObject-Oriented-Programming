#include<iostream>
using namespace std;

void swapByPtr(int *ptrX, int *ptrY);
int main() {

    int m, n;
    cout << "Give m and n:" ;
    cin >> m >> n;
    swapByPtr(&m , &n);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    return 0;

}

void swapByPtr(int *ptrX, int *ptrY) {
    int temp;
    temp = *ptrX;
    *ptrX = *ptrY;
    *ptrY = temp;
    return;

}