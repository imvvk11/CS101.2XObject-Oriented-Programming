#include<iostream>
using namespace std;

void swapByRef(int &X, int &Y);
int main() {

    int m, n;
    cout << "Give m and n:" ;
    cin >> m >> n;
    swapByRef(m, n);
    cout << "m: " << m << endl;
    cout << "n: " << n << endl;
    return 0;

}

void swapByRef(int &X, int &Y) {
    int temp;
    temp = X;
    X = Y;
    Y = temp;
    return;

}