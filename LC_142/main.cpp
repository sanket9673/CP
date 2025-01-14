/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include <iostream>
#include <unordered_set>
using namespace std ;

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // return NULL - No cycle
        // return head/curr->next - cycle
        unordered_set<ListNode*> x ;
        ListNode* curr ;
        if (head == NULL) {
            return NULL ;
        }
        if (head -> next == NULL) {
            return NULL ;
        }
        x.insert(head) ;
        for (curr = head; curr != NULL; curr = curr -> next) {
            if (x.count(curr -> next) == 1) {
                return curr->next ;
            }
            x.insert(curr -> next) ;
        }
        return NULL ;
    }
};