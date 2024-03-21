#include <iostream>
using namespace std;
class testDestructor{
    int*p;
    public:
    testDestructor(){
        p = new int[10];
        cout<<"Constructor is called"<<"\n";
    }
    virtual ~testDestructor(){
        delete []p;
        cout<<"Destructor is called"<<"\n";
    }

};
class derivedClass:public testDestructor{
    public:
    derivedClass(){
        cout<<"Derived Class constructor"<<"\n";
    }
    ~derivedClass(){
        cout<<"Derived Class Destructor"<<"\n";
    }
};
int main() {
   //testDestructor d;
   testDestructor * p = new derivedClass();
   delete p;
}
