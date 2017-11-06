//constructor fuction

#include<iostream>
#include<cmath>
using namespace std;

class V3 {

    private:
    double x, y, z;

    public:
    //constructor
    V3 (double xy, double yz, double zx) {
        x = xy; y = yz; z = zx;
        return;
    }
    V3 () {
        x = y = z = 0.0;
        return;
    }

   /* Destructor function
   ~V3() {
        if (length() == 0.0) {
            cout << "Zero vector !!! " << endl;
        }
        return;
    }
    */

    double length() {
        return sqrt(x*x + y*y + z*z);
    }


    V3 sum (V3 b) {
        V3 v;
        v.x = x + b.x;
        v.y = y + b.y;
        v.z = z = b.z ;
        return v;
    }

     V3 scale (double t) {
        V3 v;
        v.x = x*t;
        v.y = y*t;
        v.z = z*t;
        return v;
    }

    void print() {
        cout << "x: " << x << " y: " << y << " z:"<< z<<endl;
        return;
    }
};


int main(){
    V3 a(0.0,0.0,0.0);
    V3 b;
    V3 *p, *q;
    a = b;

    p = new V3(1.0,2.0,3.0);
    q = new V3;

    cout << "This is from the object pointed by p:\t";
    p->print();

    a = *p;
    b = *q;

    cout << "\nThis is from the object a:\t";
    a.print();
    delete p;
    delete q;
    return 0;

}