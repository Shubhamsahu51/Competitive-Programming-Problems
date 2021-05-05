Given a linked list of N nodes. The task is to check if the linked list has a loop. Linked list can contain self loop.

Example 1:

Input:
N = 3
value[] = {1,3,4}
x = 2
Output: True
Explanation: In above test case N = 3.
The linked list with nodes N = 3 is
given. Then value of x=2 is given which
means last node is connected with xth
node of linked list. Therefore, there
exists a loop.
*************************************************************************Solution************************************************
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        Node* slow_p=head;
        Node* fast_p=head;
        while (fast_p!=NULL and fast_p->next!=NULL) {
            slow_p=slow_p->next;
            fast_p=fast_p->next->next;
            if (slow_p==fast_p)
                return true;
        }
        return false;
    }
};
