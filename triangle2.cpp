#include <iostream>
using namespace std;
int main()
{
    //char ch= 65;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int star=1;star<(2*i+2);star++){
            cout<<"*";
        } 
        cout<<"\n";
    }
    return 0;
}