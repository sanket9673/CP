class Solution {
    public:
        int maximum69Number (int num) {
            string s = to_string(num) ;
            bool pos1 = false, pos2 = false ;
            for (int i = 0 ; i < s.length(); i++) {
                if (s[i] == '6' && pos1 == false) {
                    s[i] = '9' ;
                    pos1 = true ;
                    break ;
                }
            }
            int x = stoi(s) ;
            return x ;
        }
    };