void deleteAlt(struct Node *head)
{
    struct Node *temp;
    while(head && head->next)
    {
        temp = head->next;
        head->next = temp->next;
        free(temp);
        head = head->next;
    }
}
