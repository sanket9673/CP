class Solution {
    public:
        int dominantIndex(vector<int>& nums) {
            unordered_map<int, int> res ;
            for (int i = 0 ; i < nums.size() ; i++) res[nums[i]] = i ;
            sort(nums.begin(), nums.end()) ;
            int n = nums.size() ;
            int x = nums[n - 1] ;
            return ((nums[n-2] * 2) <= x) ? res[nums[n-1]] : -1;
        }
    };