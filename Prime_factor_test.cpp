#include <bits/stdc++.h>
using namespace std;

int main(){ 
	int n;
	cin>>n;
	vector <bool> v1(n+1,false);

	v1[1]=true;
	for(int i = 2 ;i <= n ;i++){
		if ((!v1[i]) &&  (long long)i * i <= n){
			if(n%i ==0){
				cout<<"inside if:"<<i<<endl;
				for(int j = i ; j < n; j+=i){
					cout<<j;
					v1[j] = true;
				}
			}
		}
	}
	int count =0;
	// cout<<"Factors::";

	for(int i = 1 ; i <= n ;i++){
		if(v1[i]){
			// cout<< i;
			count++;
		}
	}
	cout<<"Count::" <<count;
}