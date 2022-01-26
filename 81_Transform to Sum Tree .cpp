class Solution {
  public:
  
    // Convert a given tree to a tree where every node contains sum of values of
    // nodes in left and right subtrees in the original tree
    int toSumTree(Node *node)
    {
       if(node == NULL) return 0;
    
       else return node->data = 
       (node->left? node->left->data:0)+(node->right?node->right->data:0)+
        toSumTree(node->left)+toSumTree(node->right)
      ;
    }
};
