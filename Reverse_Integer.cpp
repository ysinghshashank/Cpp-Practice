class Solution {
public:
    int reverse(int x) {
        int number = x;
        long int reverse = 0;
        while(number){
        int rev = number%10;
        reverse = reverse*10+rev;
        number = number/10;
    }
    if(reverse > INT_MAX)
        return 0;
    else if(reverse < INT_MIN)
        return 0;
    else    
        return reverse;
    }
};