vector <int> post(Node* root, vector<int> &v)
{
  // Your code here
  if(root!=NULL){
      
      post(root->left,v);
      post(root->right,v);
      v.push_back(root->data);
  }
  return v;
}
//Function to return a list containing the preorder traversal of the tree.
vector <int> postOrder(Node* root)
{
  // Your code here
  vector<int> v;
  if(root==NULL){
      return v;
  }
  return post(root,v);
}