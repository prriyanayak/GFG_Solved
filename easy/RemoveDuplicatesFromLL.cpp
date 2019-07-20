Node *removeDuplicates(Node *root)
{
    Node* current = root;
    Node* next_next;
    
    if (current == NULL)
        return NULL;
    while(current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            next_next = current->next->next;
            free(current->next);
            current->next = next_next;
        }
        else
        {
            current = current->next;
        }
    }
    return root;
}
