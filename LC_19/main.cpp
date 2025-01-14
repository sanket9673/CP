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
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int len = 0 ;
        for (ListNode *curr = head; curr != NULL ; curr = curr -> next) {
            len++ ;
        }
        int x = len - n ;
        if (x == 0) {
            ListNode *curr = head ;
            head = head -> next ;
            delete curr ;
            return head ;
        }
        ListNode *prev = head ;
        for (int i = 1 ; i < x; i++) {
            prev = prev -> next ;
        }
        ListNode *curr = prev -> next ;
        prev -> next = curr -> next ;
        return head ;
    }
};