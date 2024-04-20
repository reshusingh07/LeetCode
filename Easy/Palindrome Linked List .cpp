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
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head;
        string s1;
        while(temp) {
            s1 += to_string(temp -> val);
            temp = temp -> next;
        }
       int idx1 = 0;
        int idx2 = s1.size() - 1;
        while(idx1 <= idx2) {
            if(s1[idx1++] != s1[idx2--]) 
                return false;
        }
        return true;
    }
};
