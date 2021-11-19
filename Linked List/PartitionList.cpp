Given the head of a linked list and a value x, partition it such that all nodes less than x come before nodes greater than or equal to x.

You should preserve the original relative order of the nodes in each of the two partitions.

class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *LH=NULL,*LT=NULL,*MH=NULL,*MT=NULL;
        ListNode *curr=head;
      
        while ( curr != NULL) {
            if (curr->val < x) {
                if (LH==NULL) {
                    LH=LT=curr;
                }else {
                LT->next=curr;
                LT=curr;
                }
                
            }else {
                if (MH==NULL) {
                    MH=MT=curr;
                }else {
                MT->next=curr;
                MT=curr;
                }
                
            }
            curr=curr->next;
        }
        
        
        if (LH !=NULL and MH==NULL){
            LT->next=NULL;
            return LH;
        }
            
        else if (LH == NULL and MH != NULL) {
            MT->next=NULL;
            return MH;
        }
            
        else if (LH != NULL and MH != NULL) {
            LT->next=NULL;
            MT->next=NULL;
            LT->next=MH;
            return LH;
        }else 
            return NULL;
        
        
    }
};
