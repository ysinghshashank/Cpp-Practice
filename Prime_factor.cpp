#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 405;
    
    vector<int> primes;
    
    if(n%2 == 0){
        primes.push_back(2);
        
        while(n%2 == 0)
        n /= 2;
    }
    
    for(int i=3; i*i<=n ; i+=2){
        
        if(n%i == 0){
            primes.push_back(i);
            
            while(n%i == 0)
            n/= i;
        }
    }
    
    if(n > 1)
    primes.push_back(n);
    for(int i=0; i<primes.size(); i++)
    cout<<primes[i]<<" ";
    return 0;
}
