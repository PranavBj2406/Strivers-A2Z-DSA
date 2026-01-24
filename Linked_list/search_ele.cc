#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
    Node (int data1, Node *ptr1)
    {
        data=data1;
        next=ptr1;
    }
};


int index(Node *head,int search_ele)
{
    int index=0;
    Node *temp=head;
    while(temp->next!=nullptr)
    {
        if(temp->data==search_ele)
        {
            return index;
        }
        temp=temp->next; 
    }
    return 0;
}

int main()
{
return 0;
}