
void pairWiseSwap(struct node *head)
{
    if (head == NULL)
        return;
    struct node* temp;
    while(head != NULL && head->next != NULL)
    {
        temp = head->data;
        head->data = head->next->data;
        head->next->data = temp;
        head = head->next->next;
    }
}
