
// brute force will be use hashing use map container


class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        map<ListNode*,int> mpp;
        ListNode *temp=head;
        while(temp!=nullptr)
        {
            if(mpp.find(temp)!=mpp.end())
            {
                return temp;
            }
            mpp[temp]=1;
            temp=temp->next;
        }
        return nullptr;
    }
};

// Step-by-step in words:

// mover starts from head

// While mover is not nullptr:

// First check → has this node (address) been visited before using map?

// If YES → this node is revisited → loop detected → return this node

// If NO → mark this node as visited in map

// Move mover to mover->next

// If traversal reaches nullptr:

// No node was revisited

// No loop present → return nullptr

class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // first detct loop using slow-fast ptr
        ListNode *slow=head;
        ListNode *fast=head;
        bool flag=false;
        while(slow && fast && fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow == fast)
            {
                flag=true;
                break;
            }
        }
        
        // check if loop is detected using flag
        if(flag==false)
        {
            return nullptr;
        }
        // reintialize slow traversal slow and fast 1 postion at a time the point where they meet is the starting index
        slow=head;
        while(slow && fast)
        {
            if(slow == fast)
            {
                return fast;
            }
            slow=slow->next;
            fast=fast->next;
        }
        return nullptr;
    }
};