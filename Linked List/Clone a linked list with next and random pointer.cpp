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
  
