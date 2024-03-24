#include <iostream>
using namespace std;
void LastDigit(int n){
    while(n>0){
        int last_digit = n%10;
        n=n/10;
        cout<<last_digit<<" ";
    }
}
int ReturnPalindrome(int n){  
    int number = n;
    int reverse = 0;
    while(number){
        int rev = number%10;
        reverse = reverse*10+rev;
        number = number/10;
    }
    return reverse;
}
int main()
{
    int n;
    cin>>n;
    //LastDigit(n);
    int reverse = ReturnPalindrome(n);
    cout<<reverse;
    return 0;
}