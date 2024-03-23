#include<iostream>
#include<vector>
#include<cstdio>
#include<string>
#include<set>
#include<functional>
using namespace std;
class Person{
	public:
	float age;
	string name;
	bool operator < (const Person& rhs) const {return age<rhs.age;}
};
int main(){
    set<Person>s1={{30,"naman"},{25,"vikas"},{45,"akash"}};
    for(const auto& e:s1){
    	cout<<e.age<<" "<<e.name<<endl;
    }
    return 0;
}