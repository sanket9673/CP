class Solution {
    public:
        vector<vector<string>> groupAnagrams(vector<string>& strs) {
            vector<vector<string>> res ;
            vector<string> nums = strs ;
            for (string &s : nums) sort(s.begin(), s.end()) ;
            unordered_map<string, vector<string>> x ;
            for (int i = 0; i < strs.size(); i++) {
                x[nums[i]].push_back(strs[i]) ;
            }
            for (auto val : x) res.push_back(val.second) ;
            return res ;
        }
    };