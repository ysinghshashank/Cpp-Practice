#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<set>
#include<functional>
#include<list>
using namespace std;
class Person{
	public:
	float age;
	string name;
	bool operator < (const Person& rhs) const {return age<rhs.age;}
};
int main(){
     int n;
    cin>>n;
    vector<int>v(n);
    for(int &i:v)
        cin>>i;
    int q;
    cin>>q;
    for(int i=1;i<=q;i++){
        int value;
        cin>>value;
        int low;
        low = lower_bound(v.begin(),v.end(),value) - v.begin();
        // int index = low + 1;
        // (low == value) ? cout<<"Yes " : cout<<"No ";
        // cout<<index<<"\n";
        cout<<low;
    }

    char input;
    cin>>input;
    //cout<<-1<<"\n";
    //cout<<input<<"\n";
    if(input == 'A' || 'B'){
        cout<<"this" <<1;
    }else{
        cout<<-1;
    }

    //pointer
    int a;
    cin>>a;
    int *p;
    p = &a;
    cout<<"address of p"<<p<<"\n";
    cout<<"value at of p"<<p<<"\n";
    cout<<"size of int "<<sizeof(int)<<"\n";
    cout<<"address of p"<<p+1<<"\n";
    cout<<"value at of p+1"<<p+1<<"\n";
    printf("addres of p %p\n",p);
    printf("value of p %d\n",*p);
    char *p0;
    p0 = (char *)p;
    cout<<"size of char "<<sizeof(char)<<"\n";
    printf("addres of p %p\n",p0+1);
    printf("value of p %d",*p0+1);
    int **q = &p;
    int ***r=&q;
    cout<<"value at of p"<<p<<"\n";
    cout<<"value at of q"<<q<<"\n";
    cout<<"value at of r"<<**r<<"\n";
    return 0;
}
