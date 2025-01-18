class Solution {
public:
    bool detectCapitalUse(string word) {
        int n = word.length() ;
        int count = 0 ;
        bool first = false ;
        for (int i = 0 ; i < n; i++) {
            if (i == 0) {
                if (isupper(word[i])) {
                    count++ ;
                    first = true ;
                }
            }
            else {
                if (isupper(word[i])) {
                    count++ ;
                }
            }
        }
        if (count == n || count == 0) {
            return true ; 
        }
        else {
            if (count == 1 && first == true) {
                return true ;
            }
            return false ;
        }
    } 
};