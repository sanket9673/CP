class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> nums = arr ;
        sort(arr.begin(), arr.end()) ;
        unordered_map<int, int> x ;
        int rank = 1 ;
        for (int i = 0 ; i < arr.size(); i++) {
            if (x.count(arr[i]) == 0) {
                x[arr[i]] = rank ;
                rank++ ;
            }
        }
        for (int i = 0 ; i < arr.size(); i++) {
            nums[i] = x[nums[i]] ;
        }
        return nums;
    }
};