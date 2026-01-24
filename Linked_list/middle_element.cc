//brute approach

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *mover=head;
        int count=0;
        while(mover!=nullptr)
        {
            mover=mover->next;
            count++;
        }
        mover=head;
       int middle=(count/2)+1;
        while(mover!=nullptr)
        {
            middle--;
            if(middle==0)
            {
               break; 
            }   
            mover=mover->next;
        }
    return mover;
    }
};

//optium soultion - slow,fast,ptr

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
};