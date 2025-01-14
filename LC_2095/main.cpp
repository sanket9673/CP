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
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head -> next == NULL) {
            return NULL ;
        }
        int len = 0 ;
        for (ListNode *curr = head; curr != NULL; curr = curr -> next) {
            len++ ;
        }
        ListNode *prev = head ;
        for (int i = 1; i < len / 2; i++) {
            prev = prev -> next ;
        }
        ListNode *curr = prev -> next ;
        prev -> next = curr -> next ;
        delete curr ;
        return head ;
    }
};