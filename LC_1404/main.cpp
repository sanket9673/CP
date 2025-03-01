class Solution {
    public:
        int numSteps(string s) {
            int res = 0 ;
            while (s.length() != 1) {
                if (s.back() == '1') {
                    int n = s.length() ;
                    s[n-1] = '0' ;
                    bool carry = true ;
                    for (int i = n - 2 ; i >= 0; i--) {
                        if (s[i] == '1' && carry == true) s[i] = '0' ;
                        else if (s[i] == '0' && carry == true){
                            s[i] = '1' ;
                            carry = false ;
                        }
                        else {
                            continue ;
                        }
                    }
                    if (carry == true) s.insert(s.begin() + 0, '1') ;
                }
                else {
                    s.pop_back() ;
                }
                cout << s << endl ;
                res++ ;
            }
            return res ;
        }
    };