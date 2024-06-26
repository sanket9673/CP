class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) {
            return false;
        }
        else {
            long long num = x ;
            long long num1 = 0 ;
            while (num > 0) {
                int digit = num % 10 ;
                num1 = num1 * 10 + digit ;
                num /= 10 ;
                }
            if (num1 == x){
                return true;
            }
            else {
                return false;
            }
        }
        
        }   
};
