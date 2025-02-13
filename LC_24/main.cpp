#include <iostream>
#include <vector>
using namespace std ;

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
        ListNode* swapPairs(ListNode* head) {
            if (head == NULL || head -> next == NULL) return head ;
            vector<int> res ;
            ListNode *temp = head ;
            while (temp != NULL) {
                res.push_back(temp -> val) ;
                temp = temp -> next ;
            } 
    
            for (int i = 0, j = 1 ; ( i < res.size()-1 && j < res.size() ); i+= 2, j+= 2) swap(res[i], res[i+1]) ;
            for (int x : res) cout << x << " " ;
            
            ListNode *heads = new ListNode(res[0]) ;
            ListNode *news = heads ;
            for (int i = 1; i < res.size(); i++) {
                news -> next = new ListNode(res[i]) ;
                news = news -> next ;
            }
            return heads ;
        }
    };