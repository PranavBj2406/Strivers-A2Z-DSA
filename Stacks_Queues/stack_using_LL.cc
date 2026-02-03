//implementation of stack using LL 

#include<bits/stdc++.h>
using namespace std;
// declare the structure of Node
class Node
{
    public:
    int data;
    Node *next;
    Node(int data1, Node *ptr)
    {
        data=data1;
        next=ptr;
    }
};

//Declare stack structure
class Stack
{
    Node *top;
    int size=0;
    public:

    Node *push(int x) // no need for empty node check
    {
        Node *temp=new Node(x,nullptr);
        temp->next=top;
        top=temp;
        size++;
        return top;
    }

    int pop()
    {
        if(top==nullptr)
        {
            return 0;
        }
        Node *temp=top;
        int val=top->data;
        top=top->next;
        delete(temp);
        size--;
        return val;
    }

    int top()
    {
        if(top==nullptr)
        {
            return 0;
        }
        return top->data;
    }

    int total_size()
    {
        return size;
    }

};

int main()
{
return 0;
}