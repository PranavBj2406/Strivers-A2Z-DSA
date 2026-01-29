


class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        ListNode *back;
        if(head->next == nullptr)
        {
            return nullptr;
        }
        if(head->next->next==nullptr)
        {
            head->next=nullptr;
            return head;
        }
        else
        {
        while(fast && fast->next)
        {
            fast=fast->next->next;
            back=slow;
            slow=slow->next;
        }
        back->next=slow->next;
        slow=nullptr;
        return head;
        }
    }
};