#include<iostream>
#include<cmath>
#include<string>
using namespace std;
class Point {
    private:
        double x, y;
    public:
        Point(double p, double q) {
        x = p;
        y = q;
        return;
    }
};
class Disk {
    private:
        Point center;
        double radius;
    public:
        Disk(double x, double y, double r) : center(Point(x, y)), radius(r) {
        return;
    }
        void print() {
        cout << "area of disk is " << 3.14*radius;
    }
};
int main(){
   Point x (1.0,2.0);
   Disk y (1.0, 2.0, 3.0);
   y.print();
    return 0;
}

/* Output:
area of disk is 9.42
*/