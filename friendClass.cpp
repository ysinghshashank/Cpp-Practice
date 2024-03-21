#include <iostream>
using namespace std;
class your;
class my{
    private:
    int a =10;
    friend your;
};
class your{
    public:
    my m;
    void fun(){
        cout<<"value inside my get accessed "<<m.a;
    }
};
int main() {
    your y;
    y.fun();
}
