class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> res ;
        for (int i = 0; i < nums.size(); i++) {
            if (res.count(nums[i]) == 0) {
                res.insert({nums[i], i}) ;
            }
            else {
                int val = abs(res[nums[i]] - i) ;
                if (val <= k) {
                    return true ;
                }
                res[nums[i]] = i ;
            } 
        }
        return false ;
    }
};