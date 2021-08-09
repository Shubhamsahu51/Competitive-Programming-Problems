/* A binary tree node has data, pointer to left child
   and a pointer to right child /
struct Node
{
    int data;
    Node* left;
    Node* right;
}; */
void helper(Node*root,int k,vector<int>&ans) {
    if (!root)           //if k is more then height
       return;
    if (k==0)
      ans.push_back(root->data);
    else {
        helper(root->left,k-1,ans);
        helper(root->right,k-1,ans);
    }
}
// function should print the nodes at k distance from root
vector<int> Kdistance(struct Node *root, int k)
{
  vector<int>ans;
  helper(root,k,ans);
  return ans;
      
