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
};
// Print n times (coding ninja)
vector<string> printNTimes(int n) {
	if(n==0)
		return {};
	vector <string> result = printNTimes(n-1);
	result.push_back("Coding Ninjas");
	return result;
};
//N to 1 without loop (Coding Ninja)
vector<int> printNos(int x) {
    if(x==1)
      return {1};
    cout<<x<<" ";
    return printNos(x-1);
}
// Sum Of First N Numbers (Coding Ninja)
long long sumFirstN(long long n) {
    if(n==1)
        return 1;
    return sumFirstN(n-1)+n;
}

int main(){
	int n;
	cin>>n;
	cout<<sumOfNumber(n);
}