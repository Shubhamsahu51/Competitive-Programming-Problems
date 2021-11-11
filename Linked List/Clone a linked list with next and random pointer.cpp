i)unordered map-
  
  class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head==NULL)                                    //corner case
            return head;
        unordered_map<Node*,Node*>mp;
        for (Node* curr=head;curr!=NULL;curr=curr->next) {
            mp[curr] = new Node(curr->val); 
            
        }
        for (Node* curr=head;curr!=NULL;curr=curr->next) {
            Node* cloneLL=mp[curr];
            cloneLL->next=mp[curr->next];
            cloneLL->random=mp[curr->random];
        }
        Node* cloneLL_head=mp[head];
        return cloneLL_head;
    }
};

ii)make changes in original LL-
  
Node *copyList(Node *head)
    {
        //insert clone LL node and connect next pointer of it
        for (Node *curr=head;curr != NULL;) {
            Node *Next = curr->next;
            curr->next = new Node(curr->data);
            curr->next->next=Next;
            curr=Next;
        }
        //connect random of clone using random of original
        for (Node *curr=head;curr != NULL;curr=curr->next->next) {
            curr->next->arb = (curr->arb != NULL) ? (curr->arb->next) : (NULL);
        }
        //segregate both LL
        Node *original=head,*copy=head->next,*temp=copy;
        while (original != NULL and copy != NULL) {
            original->next = (original->next != NULL)?(original->next->next):(original->next);
            copy->next = (copy->next != NULL)?(copy->next->next):(copy->next);
            original =original->next;
            copy =copy->next;
        }
        return temp;
    }
