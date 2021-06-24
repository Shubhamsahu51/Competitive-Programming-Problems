Input:
N = 8
value[] = {1,2,2,1,2,0,2,2}
Output: 0 1 1 2 2 2 2 2
Explanation: All the 0s are segregated
to the left end of the linked list,
2s to the right end of the list, and
1s in between.
  
Solution-
  
  class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        int count0=0,count1=0,count2=0;
        for (Node*curr=head;curr!=NULL;curr=curr->next) {
            if (curr->data==0)
                count0++;
            else if (curr->data==1)
                count1++;
            else
                count2++;
        }
        
        for (Node*curr=head;curr!=NULL;curr=curr->next) {
            if (count0!=0) {
                curr->data=0;
                count0--;
                
            }
            else if (count1!=0) {
                curr->data=1;
                count1--;
            }
            else {
                curr->data=2;
                count2--;
            }
            
        }
        return head;
        
    }
};
