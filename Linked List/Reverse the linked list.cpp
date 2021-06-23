Given the head of a singly linked list, reverse the list, and return the reversed list.
Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

*************************************************************************************************Solution*******************************************************************
i)iterative solution
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr=head;
        ListNode* prev=NULL;
        ListNode* next=NULL;
        while(curr!=NULL) {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
};

ii)Recursive-

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       if (head==NULL or head->next==NULL)
           return head;
       ListNode* rest_head=reverseList(head->next);
       ListNode* rest_tail=head->next;
       rest_tail->next=head;
       head->next=NULL;
       return rest_head; 
    }
};
