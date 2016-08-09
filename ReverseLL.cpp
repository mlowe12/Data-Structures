ListNode* reverse(ListNode* head )
{
    ListNode* temp;
    ListNode* prev = NULL;
    while(head != NULL) {
        temp = head->next;
        head->next = prev;
        prev = head;
        head = temp;
    }
    return prev;
}