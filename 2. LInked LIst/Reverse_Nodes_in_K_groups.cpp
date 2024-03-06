node *reverseKGroupLL(node *head, int k)
{
    if (head == NULL)
    {
        return NULL;
    }

    node *curr = head;
    node *nextPtr = NULL;
    node *prev = NULL;
    int count = 0;

    while (curr != NULL && count < k)
    {
        nextPtr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextPtr;
        count++;
    }
    if (nextPtr != NULL)
    {
        head->next = reverseKGroupLL(nextPtr, k);
    }
    return prev;
}
