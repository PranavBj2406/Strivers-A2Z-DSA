#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node* child;

    Node(int x) {
        data = x;
        next = nullptr;
        child = nullptr;
    }
};


Node *flattening_LL(Node *head)
{
    Node *temp=head;
    Node *t1=temp;
    Node *create;
    
    vector<int> str;
    while(temp!=nullptr) //
    {
        while(t1!=nullptr) //
        {
            str.push_back(t1->data);
            t1=t1->next;
        }
        temp=temp->next;
        t1=temp;
    }
    sort(str.begin(),str.end());
    int i=0;
    if(str.size()==0) return nullptr;
    head=new Node(str[i]);
    create=head;
    for(int i=1;i<str.size();i++)
    { 
        Node *temp2=new Node(str[i]);
        create->child=temp2;
        create=create->child;
    }
    return head;
}







// Function to create a sample multilevel linked list
Node* createList() {
    // Level 0
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    // Level 1 (child of 2)
    head->next->child = new Node(7);
    head->next->child->next = new Node(8);
    head->next->child->next->next = new Node(9);

    // Level 2 (child of 8)
    head->next->child->next->child = new Node(11);
    head->next->child->next->child->next = new Node(12);

    // Level 1 (child of 3)
    head->next->next->child = new Node(10);

    return head;
}
