#include <bits/stdc++.h>
using namespace std;

int main()
{
   long long n;
   cin>>n;
   long long sum = n*(n+1)/2;
   long long seqsum = 0;
   int num;
   for(int i=0;i<n-1;i++){
       cin>>num;
       seqsum +=num;
   }
   cout<< sum - seqsum<<endl;
    return 0;
}
