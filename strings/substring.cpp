#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "Hello world Hello !!!";
  cout << s1.substr(6) << " " << s1.substr(0, 5) << endl;
  return 0;
}
