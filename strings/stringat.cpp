#include <iostream>
#include <string>
using namespace std;
int main() {
  string s1 = "Hello    world !!!";
  if ((s1.at(6) == ' ') && (s1.at(7) == ' ')) { s1.at(6) = 'm';
  s1.at(7) = 'y';
}
cout << s1<<endl;
return 0;
}
