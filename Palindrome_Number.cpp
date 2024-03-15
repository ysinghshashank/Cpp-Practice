class Solution {
public:
    bool isPalindrome(int x) {
    unsigned int number = x;
    unsigned int reverse = 0;
    while(number){
        int rev = number%10;
        reverse = reverse*10+rev;
        number = number/10;
    }
    return x==reverse;
    }
};