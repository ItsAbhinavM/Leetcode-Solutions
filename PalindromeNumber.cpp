class Solution {
public:
    bool isPalindrome(int x) {
        int original=x;
        long reversedNumber=0,remainder;
        if (x<0) return false;
        while (x!=0){
            remainder=x%10;
            reversedNumber=reversedNumber*10+remainder;
            x/=10;
        }
        return original==reversedNumber;
    }
};
