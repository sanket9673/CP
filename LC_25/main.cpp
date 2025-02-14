#include <iostream>
#include <vector>
#include <algorithm>
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
        ListNode* reverseKGroup(ListNode* head, int k) {
            vector<int> res ;
            ListNode *temp = head ;
            while (temp != NULL) {
                res.push_back(temp -> val) ;
                temp = temp -> next ;
            }
            int p = 0, q = k ;
            int n = res.size() ;
            temp = head ;
            if (k == n) reverse(res.begin(), res.end()) ;
            else {
                 while (q <= n) {
                    reverse(res.begin() + p, res.begin() + q) ;
                    p = q  ;
                    q += k ;
                }
            }
            // for (int i : res) cout << i << " " ;
            for (int i = 0 ; i < res.size(); i++) {
                temp -> val = res[i] ;
                temp = temp -> next ;
            }
            return head ;
        }
    };