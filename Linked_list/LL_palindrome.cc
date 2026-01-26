// brute force -> hashing using stack then compare the mover->val with stack elements

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> s;
        ListNode *mover=head;
        while(mover!=nullptr)
        {
            s.push(mover->val);
            mover=mover->next;
        }
        mover=head;
        while(mover!=nullptr)
        {
            if(mover->val==s.top())
            {
                mover=mover->next;
                s.pop();
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};