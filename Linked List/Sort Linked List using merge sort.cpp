class Solution{
  public:
    
    Node *merge (Node * x , Node * y)  //merge function
    {
        Node *head = NULL , *tail = NULL;
        while (x!=NULL and y!=NULL) {
            if (x->data <= y->data) {
                if (head==NULL)
                {
                    head = x ;
                    tail = x;
                    x = x->next;
                    continue;
                }
                tail->next=x;
                tail=x;
                x=x->next;
            }else {
                if (head==NULL)
                {
                    head = y ;
                    tail = y ;
                    y = y->next;
                    continue;
                }
                tail->next=y;
                tail=y;
                y=y->next;
            }
            
        }
        
        if (x==NULL) tail->next=y;
        else tail->next=x;
            
        return head;
        
    }
    Node* mergeSort(Node* head) {
        
        //base condition
        if (!head or !head->next) return head;
        
        //midlle of linked list
        Node* fast_p=head->next;
        Node* slow_p=head;
        while (fast_p!=NULL and fast_p->next!=NULL) {
            fast_p=fast_p->next->next;
            slow_p=slow_p->next;
        }
        // left , right linked list
        Node *left = head;
        Node *right = slow_p->next;
        slow_p->next = NULL;
        //recursive calls
        
        Node *x = mergeSort (left);
        Node *y = mergeSort (right);
        //merge 
        
        Node * temp = merge (x , y);
        
        // while (temp!=NULL)
        // {
        //     cout <<temp->data<<" ";
        //     temp = temp->next;
        // }
        return temp;
    }
};
