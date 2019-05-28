bool isCircular(Node *head)
{
    if (head == NULL)
        return 1;
    Node *temp = head;
    while(temp->next != NULL && temp->next != head)
        temp = temp->next;
    if (temp->next == NULL)
        return 1;
    else
        return 0;
}
