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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *head = new ListNode(0);
        ListNode *curr = head ;
        int carry = 0 ;
        while (l1 != NULL || l2 != NULL || carry != 0) { // carry != 0 - EDGE CASE OF HANDLING LAST CARRY
            int sum = carry ;
            if (l1 != NULL) {
                sum += l1 -> val ;
                l1 = l1 -> next ;
            }

            if (l2 != NULL) {
                sum += l2 -> val ;
                l2 = l2 -> next ;
            }
            
            carry = sum / 10 ;
            curr -> next = new ListNode(sum % 10) ;
            curr = curr -> next ;
        }
        return head -> next ;
        
    }
};