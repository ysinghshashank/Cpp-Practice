#include <iostream>
using namespace std;
class external{//The external class can access the all the inner class member.
    public:
    int a=10;
    static int b;
    void fun(){
        i.show();
        cout<<i.x<<"\n";
    }
    class internalClass{
        public:
        int x = 100;
        void show(){
            cout<<b<<"\n";// The inner class cannot access the non static member of ecternal class.
        }//it can only access the static member.
    };
    internalClass i;
};
int external :: b = 0;
int main() {
    external::internalClass i;
    //i.fun();
    i.show();
}
