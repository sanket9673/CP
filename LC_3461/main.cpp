class Solution {
    public:
        bool hasSameDigits(string s) {
            string news = s ;
            while (news.length() > 2) {
                for (int i = 0; i < news.length() - 1; i++) {
                    news[i] = (news[i] + news[i+1]) % 10  ;
                }
                news.pop_back() ;
            }
    
            if (news[0] == news[1]) return true ;
            return false ;
        }
    };