class Solution {
    public:
        bool hasSpecialSubstring(string s, int k) {
            int count = 1, n = s.length() ;
            if (k == 1) {
                for (int i = 0 ; i < n; i++) {
                        bool pref = (i == 0) || (s[i] != s[i-1]) ;
                        bool suff = (i == n-1) || (s[i] != s[i+1]) ;
                        if (pref && suff) return true ;
                }
                return false ;
            }
            // CHECK FOR BOTH CONDITIONS GIVEN AS ALL ARE NECESSARY
            for (int i = 1 ; i < n; i++) {
                if (s[i] == s[i-1]) {
                    count++ ;
                    if (count == k) {
                        bool pref = (i - k < 0) || (s[i - k] != s[i]) ;
                        bool suff = (i + 1 >= n) || (s[i] != s[i+1]) ;
                        if (pref && suff) return true ;
                    }
                }
                else count = 1 ;
            }
            return false ;
        }
    };