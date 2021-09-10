Given a singly linked list of size N. The task is to swap elements in the linked list pairwise.
For example, if the input list is 1 2 3 4, the resulting list after swaps will be 2 1 4 3.
Note: You need to swap the nodes, not only the data. If only data is swapped then driver will print -1.

Example 1:

Input:
LinkedList: 1->2->2->4->5->6->7->8
Output: 2 1 4 2 6 5 8 7

 

Example 1:

Input:
LinkedList: 1->3->4->7->9->10->1
Output: 3 1 7 4 10 9 1

Expected Time Complexity: O(N).
Expected Auxiliary Space: O(1).

Constraints:
1 ≤ N ≤ 103
******************************************************************Solution**************************************************************************
i)using recursion
class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
       if (head==NULL or head->next==NULL)
       return head;
       Node* rest=pairWiseSwap(head->next->next);
       Node* temp=head->next;
       temp->next=head;
       head->next=rest;
       return temp;
       
    }
};

ii)Changing refrences

class Solution
{
    public:
    Node* pairWiseSwap(struct Node* head) 
    {
        if (head==NULL or head->next==NULL) {   //corner case
            return head;
        }
        Node *curr=head->next->next;              //for 1st 2 node
        Node *prev=head;
        head=head->next;   //new head of swapped LL
        head->next=prev;
        // cout<<head->data<<" "<<prev->data;
        while (curr!=NULL and curr->next!=NULL) {    //for rest of node in pair wise
            prev->next=curr->next;
            Node *Next=curr->next->next;
            prev=curr;
            curr->next->next=curr;
            curr=Next;
        }
        prev->next=curr;
        return head;
    }
};
