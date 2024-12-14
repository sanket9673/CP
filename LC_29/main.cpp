class Solution {
public:
    int divide(int dividend, int divisor) {
        if (dividend == 0 ) {
            return 0 ;
        }
        if (dividend == divisor) {
            return 1 ;
        }
        if (dividend == INT_MIN && divisor == -1) {
            return INT_MAX ;
        }
        int sign = ((dividend < 0) ^ (divisor < 0)) ? -1 : 1 ;
        long ans = 0 ;
        long n = abs(long(dividend));
        long d = abs(long(divisor));
        if (n < d) {
            return 0 ;
        }
        while (n >= d) {
            int count = 0 ;
            while (n >= (d << count + 1)) {
                count++ ;
            }
            ans += (1 << count) ;
            n -= (d << count) ;
        }
        if (ans == (1 << 31) && sign == 1) {
            return INT_MAX ;
        }
        else if (ans == (1 << 31) && sign == -1) {
            return INT_MIN ;
        }
        return sign * ans ;
    }
};