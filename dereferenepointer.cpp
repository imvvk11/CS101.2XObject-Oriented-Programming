#include<iostream>
using namespace std;

int main() {

    char c;
    char *ptrC;
    char **ptrptrC;
    ptrC = &c;
    ptrptrC = &ptrC;

    cin >> c ;
    cout << *(*ptrptrC) << endl;

    return 0;

}

/*sample output

input  : a
output : a

*/