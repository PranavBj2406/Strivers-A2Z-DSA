/**
 * 
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

// brute foce approach  store the
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
            mover->val=s.top();
            s.pop();
            mover=mover->next;
        }
        return head;
    }
};/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// brute force approcah

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
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
            mover->val=s.top();
            s.pop();
            mover=mover->next;
        }
        return head;
    }
};