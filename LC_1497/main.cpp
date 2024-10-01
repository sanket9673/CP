class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        for (int i = 0 ; i < arr.size(); i++) {
            arr[i] = ((arr[i] % k) + k) % k ; // making the remainder store
        }
        unordered_map<int, int> x ;
        for (int i = 0; i < arr.size(); i++) {
            if (x.count(arr[i]) == 0) {
                x[arr[i]] = 1 ;
            }
            else {
                x[arr[i]]++ ;
            }
        }
        for (const auto& pair : x) {
            if (pair.first == 0) {
                if (pair.second % 2 != 0) {
                    return false ;
                }
            }
            else if (x.count(k - pair.first) == 0) {
                return false ;
            }
            else {
                if (x[pair.first] != x[k - pair.first]) {
                    return false ;
                }
            }
        }
        return true ;
    }
};