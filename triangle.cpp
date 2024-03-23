#include <iostream>
using namespace std;
int main()
{
    //char ch= 65;
    int n,i,j,k;
    cin>>n;
    for(i=n;i>=1;i--){
        for(j=0;j<n-i;++j)
            cout<<" ";
        for(k=i;k<=2*i-1;++k)
            cout<<"*";
        for (j = 0;j<i-1;++j)
            cout << "*";
        cout<<"\n";
    }
    return 0;
}