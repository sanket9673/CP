class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        int n = nums.size() ;
        for (int i = 0 ; i < n; i++) {
            string s = to_string(nums[i]);
            reverse(s.begin(), s.end()) ;
            int x = stoi(s) ;
            nums.push_back(x) ;
        }
        
        unordered_set<int> res ;
        for (int i = 0 ; i < nums.size(); i++) {
            res.insert(nums[i]) ;
        }
        return res.size() ;
    }
};