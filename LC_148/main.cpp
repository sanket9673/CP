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
    ListNode* sortList(ListNode* head) {
        if (head == NULL) {
            return NULL ;
        }
        vector<int> arr ;
        for (ListNode *curr = head; curr != NULL; curr = curr -> next) {
            arr.push_back(curr -> val) ;
        }
        sort(arr.begin(), arr.end()) ;
        ListNode *curr = head ;
        int i = 0 ;
        while (curr != NULL) {
            curr -> val = arr[i] ;
            i++ ;
            curr = curr -> next ;
        }
        return head ;
    }
};