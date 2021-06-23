input:
17 15 8 9 2 4 6
your output is: 
8 2 4 6 17 15 9 

class Solution{
public:
    Node* segregate(Node *head){
      Node* eS=NULL,*eE=NULL,*oS=NULL,*oE=NULL;
       for (Node*curr=head;curr!=nullptr;curr=curr->next) {
           int x=curr->data;
           if (x%2==0) {
               if (eS==NULL) {
                   eS=curr;
                   eE=eS;
               }
               else {
                   eE->next=curr;
                   eE=eE->next;
               }
           }
           else {
               if (oS==NULL) {
                   oS=curr;
                   oE=oS;
               }
               else {
                   oE->next=curr;
                   oE=oE->next;
               }
           
           }
       }
       if (oS==NULL or eS==NULL)
        return head;
       eE->next=oS;
       oE->next=NULL;
       return eS;
    }
};
