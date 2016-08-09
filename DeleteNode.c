_n
#include <stdio.h>



void deleteNode(ListNode* node)
{
	ListNode* temp = node->next;
	node->val = node->next->val;
	node->next = temp->next;
	free(temp);
	return;
}


