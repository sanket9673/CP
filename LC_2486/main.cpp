class Solution {
    public:
        int appendCharacters(string s, string t) {
            int p = 0, q = 0, count = 0 ;
            while (p < t.length() && q < s.length()) {
                if (s[q] == t[p]) {
                    count++ ;
                    p++ ;
                }
                q++ ;
            }
            return t.length() - count ;
        }
    };