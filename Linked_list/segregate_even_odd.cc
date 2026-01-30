class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head || !head->next)  // necessary check in case 1 or 2 nodes
        {
            return head;
        }
        ListNode *even=head->next;
        ListNode *odd=head;
        ListNode *temp=even;
        while(even && even->next )
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        odd->next=temp;
        return head;
    }
};

/use even odd pointer concept to solve it 