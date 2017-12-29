#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "Hi there !";
  for (string::reverse_iterator rit = s1.rbegin(); rit != s1.rend(); rit++) {
    cout << *rit<< endl;
  }
  return 0;
}
