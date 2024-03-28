#include <iostream>

using namespace std;
int main()
{
    char ch= 'A';
    int n,i,j,k;
    cin>>n;
    for(int i=1;i<=n;i++){
         for(j=1;j<=i;j++)
            cout<<ch++;
       ch--;
       for(k=1;k<i;k++)
           cout<<--ch;
       cout<<"\n";
       ch='A';
    }
    return 0;
}