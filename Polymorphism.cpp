#include <iostream>
using namespace std;
class car{
    public:
    void start(){
        cout<<"car started"<<"\n";
    }
    void stop(){
        cout<<"car stopped"<<"\n";
    }
};
class innova : public car{
    public:
    void start(){
        cout<<"Innova started"<<"\n";
    }
    void stop(){
        cout<<"Innova stopped"<<"\n";
    }
};
class bmw : public car{
    public:
    void start(){
        cout<<"bmw started"<<"\n";
    }
    void stop(){
        cout<<"bmw stopped"<<"\n";
    }
};
int main() {
    car*c=new innova;
    c->start();
}
