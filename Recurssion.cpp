#include <iostream>
using namespace std;
int sumOfNumber(int n){
if(n==0){
	return 0;
}
return sumOfNumber(n-1)+n;
};
int main(){
	int n;
	cin>>n;
	cout<<sumOfNumber(n);
}