/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*> x ;
        ListNode* curr ;
        if (head == NULL) {
            return false ;
        }
        
        x.insert(head) ;
        for (curr = head; curr != NULL; curr = curr -> next) {
            if (x.count(curr -> next) == 1) {
                return true ;
            }
            x.insert(curr -> next) ;
        }
        return false ;
    }
};