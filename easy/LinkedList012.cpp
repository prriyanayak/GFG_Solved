Node* segregate(Node *head) {
    Node *newHead, *curr;
    newHead = NULL;
    int count0 = 0;
    int count1 = 0;
    int count2 = 0;
    while(head != NULL)
    {
        if (head->data == 0)
            count0 += 1;
        else if (head->data == 1)   
            count1 += 1;
        else
            count2 += 1;
        head = head->next;
    }
    while(count2 > 0)
    {
        curr = (Node*)malloc(sizeof(Node));
        curr->data = 2;
        curr->next = newHead;
        newHead = curr;
        count2--;
    }
    while(count1 > 0)
    {
        curr = (Node*)malloc(sizeof(Node));
        curr->data = 1;
        curr->next = newHead;
        newHead = curr;
        count1--;
    }
    while(count0 > 0)
    {
        curr = (Node*)malloc(sizeof(Node));
        curr->data = 0;
        curr->next = newHead;
        newHead = curr;
        count0--;
    }
    

    // printf("%d\n", newHead->data);
    return newHead;
}
