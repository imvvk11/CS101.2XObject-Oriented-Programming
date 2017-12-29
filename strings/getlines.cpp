#include <iostream>
#include <string>

using namespace std;

int main() {
  string s1 = "Please type in your name : ";
  string s2;
  cout << s1;
  getline(cin, s2);
  cout << "Your name is : " << s2 << endl;
  return 0;
}
