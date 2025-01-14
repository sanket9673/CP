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
    ListNode* swapNodes(ListNode* head, int k) {
        int len = 0 ;
        for (ListNode *curr = head; curr != NULL; curr = curr -> next) {
            len++ ;
        }
        int i = 1, j = 1 ;
        ListNode *curr1 = head, *curr2 = head ;
        while (i < k) {
            curr1 = curr1 -> next ;
            i++ ;
        }
        while (j < len - k + 1) {
            curr2 = curr2 -> next ;
            j++ ;
        }
        swap(curr1 -> val, curr2 -> val) ;
        return head ;
    }
};