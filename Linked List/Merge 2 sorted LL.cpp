Node* sortedMerge(Node* a, Node* b)  
{  
    if (a == NULL) return b;
    if (b == NULL) return a; 
    Node* head=NULL;
    Node* tail=NULL;
    //for finding head of merged LL
    if (a->data <= b->data) {
        head=tail=a;
        a=a->next;
    }else {
        head=tail=b;
        b=b->next;
    }
    //to connect rest of LL
    while (a != NULL and b != NULL) {
       if (a->data <= b->data) {
           tail->next=a;
           tail=a;
           a=a->next;
       }else {
           tail->next=b;
           tail=b;
           b=b->next;
       }
    }
    if (a==NULL)
        tail->next=b;
    else 
        tail->next=a;
    return head;
} 
