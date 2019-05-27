Node* deleteMid(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;
    Node *ptr;
    while(fast != NULL && fast->next != NULL)
    {
        ptr = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    ptr->next = slow->next;
    // delete slow;
    return head;
}
