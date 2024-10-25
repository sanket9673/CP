#include <iostream>
#include <algorithm>
using namespace std ;


// class Solution {
// public:
//     static string flip(string res) {
//         for (int i = 0; i < res.length(); i++) {
//             if (res[i] == '0') {
//                 res[i] = '1' ;
//             }
//             else {
//                 res[i] = '0' ;
//             }
//         }
//         return res ;
//     }
//     char findKthBit(int n, int k) {
//         string num = "0" ;
//         if (k == 1 || n == 1) {
//             return num[0] ;
//         }
        
//         string res = "" ;
//         int count = 0 ;
//         while (count < n) {
//             res = num + '1' ;
//             num = flip(num) ;
//             reverse(num.begin(), num.end()) ;
//             res += num ;
//             num = res ;
//             count++ ;
//         }
//         return res[k-1] ;
//     }
// };


class Solution {
public:
    char findKthBit(int n, int k) {
        // Calculate the length of S_n
        int length = (1 << n) - 1; // 2^n - 1

        // Base case
        if (n == 1) return '0';

        int mid = (length + 1) / 2; // Middle index

        if (k == mid) {
            return '1'; // Middle character is always '1'
        } else if (k < mid) {
            // If k is in the first half, it corresponds to S_{n-1}
            return findKthBit(n - 1, k);
        } else {
            // If k is in the second half, find the corresponding index in S_{n-1}
            // Calculate the index in the flipped part
            // The corresponding index in S_{n-1}
            int newK = length - k + 1; // Transform k to the mirrored index
            char result = findKthBit(n - 1, newK); // Get the bit from S_{n-1}

            // Flip the result
            return (result == '0') ? '1' : '0'; // Flip '0' to '1' and '1' to '0'
        }
    }
};
