#include<bits/stdc++.h>
using namespace std;
int main()
{
        // int n;
        // cin>>n;
        // int fib[n];
        // fib[0]=1;
        // fib[1]=1;
        // for(int i=2;i<n;i++){
        //         fib[i]=fib[i-1]+fib[i-2];
        // }
        // // for(int i=0;i<n;i++){
        // //         cout<<fib[i]<<" ";
        // // }
        // cout<<fib[n-1];
        //number = n;
        int number,n;
        cin>>number;
        n=number;
        int count;
        while(number > 0){
                number = number/10;
                n=n%number;
                if(n=0){
                        count++;
                }

        }
        cout<<count;      
}