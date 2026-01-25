class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode* , int> mpp;
        ListNode *mover=head;
        while(mover!=nullptr)
        {
            if(mpp.find(mover)!=mpp.end())
            {
                return true;
            }
            mpp[mover]=1;
            mover=mover->next;
        }
        return false;
    }
};

// brute force approach

// Step-by-step in words:

// mover starts from head

// For each node:

// First check → has this node been visited before?

// If YES → loop detected → return true

// Then mark the node as visited in map

// Move mover to next node

// If traversal ends → no loop → return false

class Solution {
public:
    bool hasCycle(ListNode *head) {
        // slow fast ptr appraoch
        ListNode *slow=head;
        ListNode *fast=head;
        while(fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            {
                return true;
            }
        }
        return false;
    }
};

// slow fast ptr apprrach