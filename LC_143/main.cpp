#include <iostream>
#include <stack>
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
        void reorderList(ListNode* head) {
            vector<int> res ;
            ListNode *temp = head ;
            while (temp != NULL) {
                res.push_back(temp -> val) ;
                temp = temp -> next ;
            }
            stack<int> x, y ;
            for (int i = res.size() / 2; i >= 0; i--) x.push(res[i]) ;
            for (int i = ceil(res.size() / 2); i < res.size(); i++) y.push(res[i]) ;
            int count = 1 ;
            temp = head ;
            for (int i = 0; i < res.size(); i++) {
                if (count % 2 != 0) {
                    temp -> val = x.top() ;
                    x.pop() ;
                }
                else {
                    temp -> val = y.top() ;
                    y.pop() ;
                }
                temp = temp -> next ;
                count++ ;
            }
        }
    };