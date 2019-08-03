Node* copyLeftRight(Node* root)
{
    if(root == NULL)
        return NULL;
    Node* left = root->left;
    root->left = newNode(root->data);
    root->left->left = left;
    if(left != NULL)
        left->left = copyLeftRight(left);
    root->left->right = copyLeftRight(root->right);
    return root->left;
}
void copyRandom(Node* tree, Node* cloneNode)
{
    if (tree == NULL)    
        return;
    if (tree->random != NULL)
        cloneNode->random = tree->random->left;
    else
        cloneNode->random = NULL;
    if (tree->left != NULL && cloneNode->left != NULL)
        copyRandom(tree->left->left, cloneNode->left->left);
    copyRandom(tree->right, cloneNode->right);
}

void restoreTree(Node* tree, Node* clone)
{
    if (tree == NULL)
        return;
    if (clone->left != NULL)
    {
        Node* leftie = clone->left->left;
        tree->left = tree->left->left;
        clone->left = leftie;
    }
    else
        tree->left = NULL;
    restoreTree(tree->left, clone->left);
    restoreTree(tree->right, clone->right);
    
}

Node* cloneTree(Node* tree)
{
    if(tree == NULL)
        return NULL;
    Node* cloneNode = copyLeftRight(tree);
    copyRandom(tree, cloneNode);
    restoreTree(tree, cloneNode);
    return cloneNode;
}
