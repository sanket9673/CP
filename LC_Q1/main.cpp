class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int res = 0 ;
        for (int i = 0; i < s.length(); i++) {
            int count0 = 0 ;
            int count1 = 0 ;
            for (int j = 0; i + j < s.length() ; j++) {
                if (s[i+j] == '0') {
                    count0++ ;
                }
                else if (s[i+j] == '1') {
                    count1++ ;
                }

                if (count0 <= k || count1 <= k) {
                    res++ ;
                }
            }
        }
        return res ;
    }
};