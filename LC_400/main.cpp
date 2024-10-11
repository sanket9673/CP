class Solution {
public:
    int findNthDigit(int n) {
        long long a = 1 ;
        long long count = 9 ;
        long long start = 1 ;
        while ((long long)n > a*count) {
            n -= a*count ;
            a++ ;
            count *= 10 ;
            start *= 10 ;
        }
        long long num = start + (n - 1)/a ;
        string numStr = to_string(num);
        return numStr[(n - 1) % a] - '0'; 
    }
};