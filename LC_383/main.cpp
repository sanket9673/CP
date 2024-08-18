class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        const int CHAR = 256 ;
        vector<int> arr1(CHAR, 0) ;
        vector<int> arr2(CHAR, 0) ;
        int sum1 = 0;
        int sum2 = 0;

        for (int i = 0; i < ransomNote.length(); i++) {
            arr1[ransomNote[i]]++ ;
        }

        for (int i = 0; i < magazine.length(); i++) {
            arr2[magazine[i]]++ ;
        }

        for (int i = 0; i < CHAR; i++) {
            if (arr1[i] > arr2[i]) {
                return false ;
            }
        }
        return true ;
    }
};