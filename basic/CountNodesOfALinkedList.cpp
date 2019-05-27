int getCount(struct Node* head){
    int count = 0;
    while(head->next != NULL)
    {
        count += 1;
        head = head->next;
    }
    return count+1;
}
