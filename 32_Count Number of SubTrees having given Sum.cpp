int helper(Node* root,int X,int &count)
{
    int ret_val = 0;
    if(root == NULL)return 0;
    if(root != NULL)
    {
        ret_val = helper(root->left,X,count)+helper(root->right,X,count)+root->data;
    }
    if(ret_val == X) count++;
    return ret_val;
}
int countSubtreesWithSumX(Node* root, int X)
{
    int count = 0;
    helper(root,X,count);
    return count;
}
