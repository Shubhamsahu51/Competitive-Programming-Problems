Node* reverseDLL(Node * head)
{
    if (head == NULL or head->next == NULL) 
        return head;
    Node* Prev_ptr = NULL, *curr = head;
    while (curr != NULL) {
        Prev_ptr = curr->prev;
        curr->prev = curr->next;
        curr->next=Prev_ptr;
        curr = curr->prev;
    }
    return Prev_ptr->prev;
}
