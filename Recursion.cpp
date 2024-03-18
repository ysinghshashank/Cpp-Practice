#include <iostream>
using namespace std;

//Recursive way to find sum of n natural number
int sumOfNumber(int n){
if(n==0){
	return 0;
}
return sumOfNumber(n-1)+n;
};
//1 to N Without Loop (coding ninja)
vector<int> printNos(int x) {
    if(x==0)
        return {};
    vector <int> ans = printNos(x-1);
    ans.push_back(x);
    return ans;

}
int main(){
	int n;
	cin>>n;
	cout<<sumOfNumber(n);
}