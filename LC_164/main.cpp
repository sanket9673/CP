class Solution {
public:
    int maximumGap(vector<int>& nums) {
        if (nums.size() < 2) {
            return 0 ;
        }
        sort(nums.begin(), nums.end()) ;
        int p = 0;
        int q = 1 ;
        int res = 0 ;
        for (int i = 0; i < nums.size() & q < nums.size(); i++) {
            res = max (res, nums[q] - nums[p]) ;
            p++ ;
            q++ ;
        }
        return res ;

    }
};