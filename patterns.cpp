#include <iostream>
using namespace std;
int main() {
    int n,m;
    cout<<"size of triangle"<<" \n";
    cin>>n;
    m=n;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<"*"<<" ";
        }
        m=m-1;
        cout<<"\n";
    }
   
}
