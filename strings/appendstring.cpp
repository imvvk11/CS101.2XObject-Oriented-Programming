#include <iostream>
#include <string>
using namespace std;
int main() {
  string s;
  string s1 = "Hello ";
  string s2 = " my world !!!";
  s.append(s1);
  s.append(s2, 4, 5);
  s.append("!!!");
  cout << s << endl;
  return 0;
}