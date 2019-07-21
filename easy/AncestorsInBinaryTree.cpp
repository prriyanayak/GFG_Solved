bool printAncestorsFinal(struct Node *root, int target)
{
    if (root == NULL)
        return false;
        
    if (root->data == target)
        return true;
        
    if (printAncestorsFinal(root->left, target) || printAncestorsFinal(root->right, target))
    {
        cout << root->data << " ";
        return true;
    }
    
    return false;
}
bool printAncestors(struct Node* root, int target)
{
    bool a = printAncestorsFinal(root, target);
    cout << endl;
}
