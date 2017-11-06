#include <iostream>
#include <string>
using namespace std;

class Point {
 private:
  double x, y;

 public:
  static int count;
  Point() {
    count++;
    return;
  }
  Point(double a, double b) {
    x = a;
    y = b;
    count++;
    return;
  }
};
int Point::count = 0;
int main() {
  Point a, b, c(0.0, 0.0);
  cout << "Count of points ";
  cout << Point::count << endl;  //scope resolution
  return 0;
}

/* Output:
Count of points 3
*/