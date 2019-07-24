bool areIdentical(Node* root1, Node* root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;
    if (root1 == NULL || root2 == NULL)
        return false;
    return (root1->data == root2->data 
    && areIdentical(root1->left, root2->left) 
    && areIdentical(root1->right, root2->right));
}
bool isSubtree(Node* T1, Node* T2) {
    // Your code here
    // return 1 if T2 is subtree of T1 else 0
    if (T2 == NULL)
        return true;
    if (T1 == NULL)
        return false;
    if (areIdentical(T1, T2))
        return true;
    return isSubtree(T1->left, T2) || isSubtree(T1->right, T2);
}
