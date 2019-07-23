bool findPairUtil(struct node* root, int sum, unordered_set<int> &set)
{
    if (root == NULL)
        return false;
    if (findPairUtil(root->left, sum, set))
        return true;
    if (set.find(sum - root->val) != set.end())
    {
        return true;
    }
    else
        set.insert(root->val);
    return findPairUtil(root->right, sum, set);
}
bool isPairPresent(struct node *root, int target)
{
    unordered_set<int> set;
    if (!findPairUtil(root, target, set))
        return false;
    return true;
}
