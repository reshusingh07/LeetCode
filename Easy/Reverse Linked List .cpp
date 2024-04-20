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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head -> next == NULL)
            return head;
        ListNode* temp = head;
        vector<int> nums;
        while(temp != NULL) {
            nums.push_back(temp -> val);
            temp = temp -> next;
        }
        temp = head;
        int idx1 = 0;
        int idx2 = nums.size() - 1;
        while(idx1 < idx2) {
            nums[idx1] += nums[idx2];
            nums[idx2] = nums[idx1] - nums[idx2];
            nums[idx1++] -= nums[idx2--];
        }        
       
       for(int i = 0; i < nums.size(); i++) {
           temp -> val = nums[i];
           temp = temp -> next;
       }
        return head;
    }
};
