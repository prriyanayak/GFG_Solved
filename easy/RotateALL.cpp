void rotate(node **head_ref, int k)  
{  
    if (k == 0)  
        return;  
    
    node* current = *head_ref;  
    
    int count = 1;  
    while (count < k && current != NULL)  
    {  
        current = current->next;  
        count++;  
    }  
    if (current == NULL)  
        return;  
    node *kthNode = current;  
    while (current->next != NULL)  
        current = current->next;  
    current->next = *head_ref;  
    *head_ref = kthNode->next;  
    kthNode->next = NULL;  
}  
