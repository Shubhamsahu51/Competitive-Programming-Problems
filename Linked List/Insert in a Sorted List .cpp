Given a linked list sorted in ascending order and an integer called data, insert data in the linked list such that the list remains sorted.

Example 1:

Input:
LinkedList: 25->36->47->58->69->80
data: 19
Output: 19 25 36 47 58 69 80

  
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};


class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) {
        Node* temp=new Node(data);
        if (head==NULL) 
            return temp;
        if (data < head->data) {
            temp->next=head;
            return temp;
        }
        Node* curr=head;
        while (curr->next!=NULL and curr->next->data < data)
            curr=curr->next;
        temp->next=curr->next;
        curr->next=temp;
        return head;
    }
};
