#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<set>
#include<functional>
#include<list>
using namespace std;
// class Person{
// 	public:
// 	float age;
// 	string name;
// 	bool operator < (const Person& rhs) const {return age<rhs.age;}
// };
int main(){
    list<int> list1 = {5,2,3,4,3};
    list<int> list2 = {7,6,1,9};
    // list1.sort();
    // list2.sort();
    // list1.merge(list2);
    list1.splice(list1.begin(),list2);
    for(auto& i: list1){
    	cout<<i<<" ";
    }
    cout<<endl;
    for(auto& i: list2){
    	cout<<i<<" ";
    }
    return 0;
}