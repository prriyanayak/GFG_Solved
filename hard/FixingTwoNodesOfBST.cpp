void Inorder(struct Node *root, struct Node **prev, struct Node **swap){
    if(!root)
        return ;
    Inorder(root->left,prev,swap);
    if(*prev ==NULL)
        *prev = root;
    else{
        if( root->data < (*prev)->data){
            if(*swap == NULL)
                *swap = *prev ;
            else{
                int temp = root->data;
                root->data = (*swap) ->data;
                (*swap) ->data = temp;
            }
        }
        *prev = root;
    }
    Inorder(root->right,prev,swap);
}
struct Node *correctBST( struct Node* root )
{
    // add code here.
    struct Node *prev=NULL,*swap=NULL;
    Inorder(root,&prev,&swap);
    
    return root;
}
