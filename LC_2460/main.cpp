class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            for (int i = 0 ; i < nums.size() - 1; i++) {
                if (nums[i] == nums[i+1]) {
                    nums[i] *= 2 ;
                    nums[i+1] = 0 ;
                }
            }
            // vector<int> res ;
            // for (int i : nums) {
            //     if (i != 0) res.push_back(i) ;
            // }
            // for (int i : nums) {
            //     if (i == 0) res.push_back(i) ;
            // }
            // return res ;
            int p = 0 ;
            for (int i = 0 ; i < nums.size(); i++) {
                if (nums[i] != 0) {
                    swap(nums[p], nums[i]) ;
                    p++ ;
                }
            }
            return nums;
        }
    };