class Solution {
public:
    int generateKey(int num1, int num2, int num3) {\
        string res = "" ;
        string a = to_string(num1) ;
        string b = to_string(num2) ;
        string c = to_string(num3) ;
        if (a.length() < 4) {
            while (a.length() != 4) {
                a = '0' + a ;
            }
        }
        if (b.length() < 4) {
            while (b.length() != 4) {
                b = '0' + b ;
            }
        }
        if (c.length() < 4) {
            while (c.length() != 4) {
                c = '0' + c ;
            }
        }
        int count = 0 ;
        while (count < 4) {
            int val = min(a[count] - '0', b[count] - '0') ;
            res += to_string(min(c[count] - '0', val)) ;
            count++ ;
        }

        return stoi(res) ;
    }
};