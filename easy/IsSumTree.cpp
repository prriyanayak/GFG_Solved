int getSum(Node* root)
{
    if (root == NULL)
        return 0;
    return (root->data + getSum(root->left) + getSum(root->right));
}

bool isSumTree(Node* root)
{
    // empty tree is sum tree
    if (root == NULL)
        return true;
    // leaves are sum tree
    if (root->left == NULL && root->right == NULL)
        return true;
    int leftSum = getSum(root->left);
    int rightSum = getSum(root->right);
    int finalSum = leftSum + rightSum;
    
    if (root->data == finalSum)
        return isSumTree(root->left) && isSumTree(root->right);
    return false;
    
}
