int compare(struct Node*list1,struct Node*list2)
{
    while(list1 != NULL && list2 != NULL)
    {
        if ((list1->c)-(list2->c) > 0)
            return 1;
        else if ((list1->c)-(list2->c) < 0)
            return -1;
        else if (list1->c == list2->c)
        {
            list1 = list1->next;
            list2 = list2->next;
        }
    }
    return 0;
}
