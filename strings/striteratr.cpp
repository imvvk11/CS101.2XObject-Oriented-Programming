#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "Hi there !";
  for (string::iterator it = s1.begin(); it != s1.end(); it++) {
    cout << *it<<endl;
  }
  return 0;
}
