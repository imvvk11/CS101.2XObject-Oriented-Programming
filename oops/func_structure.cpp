#include<iostream>
#include<cmath>
using namespace std;

//functions within structures

struct vector {
    double x, y, z;

    double length() {
        return x*x + y*y + z*z;
    }

    vector sum(vector const &b) {

        vector v;
        v.x = x + b.x;
        v.y = y + b.y;
        v.z = z + b.z;

    return v;
    }


    vector scale(double const factor) {

        vector v;
        v.x = x * factor;
        v.y = y * factor;
        v.z = z * factor;

        return v;
    }

};

int main ()
{
    vector p,q, *ptrQ;
    cin >> p.x >> p.y >>  p.z;
    q = p.scale(0.5);
    ptrQ = &q;
    cout << ptrQ->length();

}


