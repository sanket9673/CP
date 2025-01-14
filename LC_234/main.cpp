/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
#include <iostream>
using namespace std ;

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> res1 ;
        for (ListNode *curr = head; curr != NULL; curr = curr -> next) {
            res1.push_back(curr -> val) ;
        }
        vector<int> res2(res1) ;
        reverse(res1.begin(), res1.end()) ;
        if (res1 == res2) {
            return true ;
        }
        return false ;
    }
};