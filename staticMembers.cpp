#include <iostream>
using namespace std;
class test{
    public:
    int a;
    static int count;
    test(){
        a=10;
        count++;
    }
    static int getCount(){
        return count;
    }
};
int test :: count = 0;
int main() {
    test t1,t2;
    cout<<t1.count<<"\n";
    cout<<t2.count<<"\n";
    cout<<test::count<<"\n";
    cout<<test::getCount()<<"\n";
}
