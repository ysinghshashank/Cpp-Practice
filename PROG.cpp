#include<bits/stdc++.h>
using namespace std;
 
int main() {
   //  #ifndef ONLINE_JUDGE
   //  freopen("input.txt", "r", stdin);
   //  freopen("output.txt", "w", stdout);
   //  #endif 
   //int n;
   //cin>>n;
   // for(int i=1;i<=n-1;i++){
   // 	for(int j=1;j<=i;j++){
   // 		cout<<j;
   // 	}
   // 	cout<<endl;
   // }
   // for(int i=1;i<=n;i++){
   // 	cout<<i;
   // }
   // cout<<endl;
   // for(int i=n-1;i>=1;--i){
   // 	for(int j=1;j<=i;j++){
   // 		cout<<j;
   // 	}
   // 	cout<<endl;
   // }
   //cout<<n;
   
   int arr[] = {2,5,4,6,9};
   int pref[5] = {0,0,0,0,0};
   int arr1[] = {1,2,3,4,5};
    
   int n = 5;

    // pref[0] = arr[0];
    
    // for(int i=1; i<n;i++)
    // pref[i] = pref[i-1] + arr[i];
    
   for(int i=n-2;i<=0;i--)
   cout<<pref[i]<<" ";

   suff[n-1] = arr[n-1];
    
    for(int i=n-2; i>=0; i--)
    suff[i] = suff[i+1] + arr[i];
    
     for(int i=0;i<n;i++)
    cout<<suff[i]<<" ";
   int arr[5] = {1,2,3,4,5};
    int pref[5] = {0,0,0,0,0};
    int suff[5] = {0,0,0,0,0};
    
    int res[5] = {0,0,0,0,0};
    
    pref[0] = arr[0];
    
    for(int i=1; i<n; i++)
    pref[i] = pref[i-1]*arr[i];
    
    suff[n-1] = arr[n-1];
    
    for(int i=n-2; i>=0; i--)
    suff[i] = suff[i+1]*arr[i];
    
    res[0] = suff[1];
    res[n-1] = pref[n-2];
    
    for(int i = 1; i<n-1; i++){
        res[i] = pref[i-1]*suff[i+1];
    }
    
    for(int i=0;i<n;i++)
    cout<<res[i]<<" ";

   for(int i=1; i<= sqrt(n); i++)
    {
        if(n%i == 0){
            if(i*i == n)
            fac += 1;
            else
            fac += 2;
        }
    }


   return 0;
}