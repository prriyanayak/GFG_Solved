void removeTheLoop(Node *head)
{
    int loop = detectloop(head);
    if(loop == 1)
    {
        struct Node * start = head;
        while(start != NULL)
        {
            start->data = -1;
            if(start->next->data == -1)
            {
                start->next = NULL;
                break;
            }
            else
                start = start->next;
        }
    }
}
