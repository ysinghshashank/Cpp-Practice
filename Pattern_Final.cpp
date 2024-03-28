#include <iostream>
using namespace std;
void pattern19 (int n){
    int space=0;
    for(int i=0;i<n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        for(int j = 0;j<space;j++){
            cout<<" ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<"*";
        }
        space +=2;
        cout<<"\n";
    }
    space = space-2;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        for(int j = 0;j<space;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        space -=2;
        cout<<"\n";
    }
};
void pattern1 (int n){
    for(int i=0;i<number;i++){
        for(int j=1;j<=number;j++){
            cout<<"* ";
        }
        cout<<"\n";
    }
};
int main()
{
    int n;
    cin>>n;
    pattern19(n);
    pattern1(n);
    return 0;
}