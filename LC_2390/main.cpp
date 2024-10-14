class Solution {
public:
    string removeStars(string s) {
        stack<char> x ;
        string res = "" ;
        for (int i = 0; i < s.length(); i++) {
            if (x.empty() && s[i] != '*') {
                x.push(s[i]) ;
            }
            else if (s[i] != '*') {
                x.push(s[i]) ;
            }
            else if (s[i] == '*' && !x.empty()) {
                x.pop() ;
            }
        }
        while (!x.empty()) {
            char ans = x.top() ;
            res += ans ;
            x.pop() ;
        }
        reverse(res.begin(), res.end()) ;
        return res ;
    }
};