#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "Hello world Hello !!!";
  int i = s1.find("Hello");
  int j = s1.find("Hi");
  cout << i << ", " << j << endl;
  return 0;
}
