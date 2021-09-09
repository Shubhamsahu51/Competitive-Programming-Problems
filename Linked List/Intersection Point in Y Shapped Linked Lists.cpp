int intersectPoint(Node* head1, Node* head2)
{
    int count1=0,count2=0;
    Node* temp1=head1,*temp2=head2;
    while (temp1!=NULL) {
        count1++;
        temp1=temp1->next;
        
    }
    while (temp2!=NULL) {
        count2++;
        temp2=temp2->next;
    }
    
    if (count1>count2) {
        for (int i=1 ; i<=abs(count1-count2) ; i++) 
            head1=head1->next;
    }else if( count1 < count2){
        for (int i=1 ; i<=abs(count1-count2) ; i++) 
            head2=head2->next;
    }
    Node *curr1=head1,*curr2=head2;
    while (curr1!=NULL and curr2!=NULL) {
        if (curr1==curr2) 
            return (curr1->data);
        curr1=curr1->next;
        curr2=curr2->next;
    }
    
    return -1;
   
}
