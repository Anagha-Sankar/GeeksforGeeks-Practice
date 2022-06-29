// Using queue
// 1. Enqueue root
// 2. dequeue it and print, then enqueue its children
// 3. repeat step 2

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int> v;
      if (node==NULL){
          return v;
      }
      queue<Node*> q;
      q.push(node);
      while(q.empty()==false){
          Node *cur = q.front();
          q.pop();
          v.push_back(cur->data);
          if(cur->left!=NULL){
              q.push(cur->left);
          }
          if(cur->right!=NULL){
              q.push(cur->right);
          }
      }
      return v;
    }
};

// Time complexity: O(n)
// Space complexity: O(n)  /* Theta(w) where w is width*/