class Solution {
public:
    static bool compare(string &a, string &b) {
        if (a + b > b + a) {
            return true ;
        }
        return false ;
    }

    string largestNumber(vector<int>& nums) {
        int count0 = 0 ;
        for (int x : nums) {
            if (x == 0) {
                count0++ ;
            }
        }

        if (count0 == nums.size()) {
            return "0" ;
        }
        
        vector<string> res ;
        string result = "" ;
        for (int i = 0; i < nums.size(); i ++) {
            res.push_back(to_string(nums[i])) ;
        }
        sort(res.begin(), res.end(), compare) ;
        for (int i = 0 ; i < res.size(); i++) {
            result += res[i] ;
        }

        return result ;
    }
};