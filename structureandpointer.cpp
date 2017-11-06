struct Book {
    char title[50];
    char authors[500];
    double price;
    int accNum;
    bool checkOutStatus;
    int claimantId;

};

struct Patron {
    char name[50];
    char address[100];
    int uniqueId;
    int numBooksChkdOut;
    int claimdBookAccNum;

};

struct point {
    double x,y;
};

struct disk {
    point center;
    double radius;
};

point p1;
p1.x = 2; p1.y = 3;
disk d1;
d1.p1 = {2,3};  //d1.center.x = 2; d1.cenetr.y = 3



typedef struct MyStructType {

    char c;
    int x,y;

} mystruct;

MyStruct p1;
MyStruct *ptrp1;

ptrp1 = &p1;
*ptrp1 = {'c', 1, 2};

// (*ptrp1).x == ptrp1->x

(*ptrp1).x = 1+(*ptrp1).y;

ptrp1->z = 'c; ptrp1->x = 2;
ptrp1->y = 3

ptrp1->x = 1+ ptrp1->y
