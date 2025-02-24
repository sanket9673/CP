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
        ListNode* removeZeroSumSublists(ListNode* head) {
            ListNode *temp = new ListNode(0) ;
            temp -> next = head ;
            unordered_map<int, ListNode*> x ;
            int prevsum = 0 ;
            for (ListNode *curr = temp ; curr != NULL ; curr = curr -> next) {
                prevsum += curr -> val ;
                x[prevsum] = curr ;
            }

            
            prevsum = 0 ;
            for (ListNode *curr = temp ; curr != NULL ; curr = curr -> next) {
                prevsum += curr -> val ;
                curr -> next = x[prevsum] -> next ;
            }
            return temp -> next ;
        }
    };