#include <iostream>
using namespace std;
class testDestructor{
    int*p;
    public:
    testDestructor(){
        p = new int[10];
        cout<<"Constructor is called"<<"\n";
    }
    ~testDestructor(){
        delete []p;
        cout<<"Destructor is called"<<"\n";
    }

};
int main() {
   testDestructor d;
   testDestructor * p = new testDestructor();
   delete p;
}
