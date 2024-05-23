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
    ListNode* removeElements(ListNode* head, int value) {
        if(head==NULL)
        {
            return NULL;
        }
        if((head->next==NULL) && (head->val==value))
        {
            return NULL;
        }
        if((head->val!=value) && (head->next==NULL))
        {
            return head;
        }
        while((head!=NULL) && (head->val==value))
        {
            ListNode* temp1=head;
            head=head->next;
            temp1->next=NULL;
            delete temp1;
         }
        ListNode* temp=head;
        while((temp!=NULL) && (temp->next!=NULL))
        {
            ListNode* forward=temp->next;
            if(temp->next->val==value)
            {
                temp->next=forward->next;
                forward->next=NULL;
                delete forward;
            }
            else{
                temp=temp->next;
                forward=forward->next;
            }
        }
        return head;
    }
};
