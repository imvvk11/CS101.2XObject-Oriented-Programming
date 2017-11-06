#include <iostream>

using namespace std;
int main() {
  int numStudents;
  int* A;
  cin >> numStudents;
  A = new int[numStudents];  //dynamicall allocate memory
  if (A != NULL) {
    A[0] = 10;
    A[1] = 15;
    A[2] = 16;
  }

  delete A

  return 0;
}