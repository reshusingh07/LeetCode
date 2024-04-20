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
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == NULL || head->next == NULL) 
        return head;

        ListNode* tail = head;
        while(tail -> next != NULL) {
          if(tail -> val == tail -> next -> val) {
            ListNode* duplicate = tail -> next;
            tail -> next = tail -> next -> next;
             delete duplicate;
          }
          else 
              tail = tail -> next;
        }
        return head;
    }
};
