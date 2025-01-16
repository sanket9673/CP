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
using namespace std 

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == NULL || head -> next == NULL)  {
            return head ;
        } 
        int count = 0 ;
        ListNode *smp = head ;
        while (smp != NULL) {
            smp = smp -> next ;
            count++ ;
        }
        for (int i = 0 ; i < k % count ; i++) {
            ListNode *tail = head ;
            while (tail -> next -> next != NULL) {
                tail = tail -> next ;
            }
            ListNode *curr = tail ;
            curr = curr -> next ;
            tail -> next = NULL ;
            curr -> next = head ;
            head = curr ;
        }
        return head ;
    }
};