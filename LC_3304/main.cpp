class Solution {
public:
    char kthCharacter(int k) {
        // string word = "a" ;
        // while(word.length() < k) {
        //     for (int i = 0; i < word.length(); i++) {
        //         char x ;
        //         if (word[i] == 'z') {
        //             x = 'a' ;
        //         }
        //         else {
        //             x = word[i] + 1 ;
        //         }
        //         word += x ;
        //     }
        // }
        // return word[k-1] ;
        vector<char> res ;
        res.push_back('a') ;
        while (res.size() < k) {
            int n = res.size();
            for (int i = 0; i < n; i++) {
                char x ;
                if (res[i] == 'z') {
                    x = 'a' ;
                }
                else {
                    x = res[i] + 1 ;
                }
                res.push_back(x) ;
            }
        }
        return res[k-1] ;
    }
};