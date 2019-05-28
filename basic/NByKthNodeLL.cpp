int fractional_node(struct node *head, int k)
{
    int count = 0;
    struct node *temp = head;
    while(temp->next != NULL)
    {
        count += 1;
        temp = temp->next;
    }

    int index = count/k;
    while(index > 0)
    {
        index --;
        head = head->next;
    }
    return head->data;
}
