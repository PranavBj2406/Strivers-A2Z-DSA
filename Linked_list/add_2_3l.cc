#include<bits/stdc++.h>
using namespace std;

class ListNode {
    public:
    int data;
    ListNode* next;

    ListNode(int val) {
        data = val;
        next = nullptr;
    }
};


ListNode *reversal(ListNode *head)
{
    ListNode *mover=head;
    ListNode *next;
    ListNode *back=nullptr;
    while(mover!=nullptr)
    {
        next=mover->next;
        mover->next=back;
        back=mover;
        mover=next;
    }
    return back;
}

ListNode add_1_ll(ListNode *head)
{
    int carry=0;
    head=reversal(head);
    ListNode *mover=head;
    while(mover!=nullptr)
    {
        mover->data=mover->data+1+carry;
        if(mover->data>9)
        {
            carry=1;
            mover->data=mover->data%10
        }
    }
}





int main() {
    // Create nodes
    ListNode* head = new ListNode(1);
    ListNode* second = new ListNode(5);
    ListNode* third = new ListNode(9);

    // Link nodes
    head->next = second;
    second->next = third;

    // Print the linked list
    ListNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}








// recurisive approach

int helper(ListNode *head)
{
     return 
}