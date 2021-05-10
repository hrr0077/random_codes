#include<iostream>
using namespace std;

class BCA{
    static int roll;
    char name[20];
    float marks;
};

void main()
{
    BCA a;
    BCA()
    {
        a.name = "Ritik";
        a.marks = 100;
        a.roll = 20;
    }
    cout<< "Hello World" << a.name << a.roll << a.marks;
}