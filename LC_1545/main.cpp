class Solution {
public:
    static string flip(string res) {
        for (int i = 0; i < res.length(); i++) {
            if (res[i] == '0') {
                res[i] = '1' ;
            }
            else {
                res[i] = '0' ;
            }
        }
        return res ;
    }
    char findKthBit(int n, int k) {
        string num = "0" ;
        if (k == 1 || n == 1) {
            return num[0] ;
        }
        
        string res = "" ;
        int count = 0 ;
        while (count < n) {
            res = num + '1' ;
            num = flip(num) ;
            reverse(num.begin(), num.end()) ;
            res += num ;
            num = res ;
            count++ ;
        }
        return res[k-1] ;
    }
};