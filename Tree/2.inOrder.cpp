vector <int> pre(Node* root, vector<int> &v)
{
  // Your code here
  if(root!=NULL){
      v.push_back(root->data);
      pre(root->left,v);
      pre(root->right,v);
  }
  return v;
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> preorder(Node* root)
{
  // Your code here
  vector<int> v;
  if(root==NULL){
      return v;
  }
  return pre(root,v);
}