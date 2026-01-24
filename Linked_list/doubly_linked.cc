#include<bits/stdc++.h>
using namespace std;

class node
{
    public:
    int data;
    node *next;
    node *back;
    node(int data1,node *ptr1,node *ptr2)
    {
        data=data1;
        next=ptr1;
        back=ptr2;
    }
};

// node(data,next,back)

node *create(int &n)
{
    node *temp,*head,*mover; 
    int data;
    cin>>data;
    head=new node(data,nullptr,nullptr);
    mover=head;
    // cout<<"loop block entry";
    for(int i=0;i<n-1;i++)
    {
        cout<<"take input";
        cin>>data;
        temp=new node(data,nullptr,mover);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

//

void print_ele(node *head)
{
    node *a;
    a=head;
    while(a!= nullptr)
    {
        cout<<a->data;
        a=a->next;
    }
}

node *insert_at_front(node *head,int data)
{
    cin>>data;
    node *temp;
    temp=new node(data,head,nullptr);
    head->back=temp;
    head=temp;
    return head;
}

node *insert_at_index(node *head,int data,int index)
{
    int count=0;
    node *ptr,*mover,*temp;
    mover=head;
    ptr=mover->next;
    while(count<index-1)
    {
        mover=mover->next;
        ptr=ptr->next;
    }
    cin>>data;
    temp=new node(data,mover->next,mover);
    mover->next=temp;
    ptr->back=temp;
    return head;
}

// logic for reversing an DLL

// we swap links likewise that we do iit with numbers

node *reverse_DLL(node* head)
{
    node *mover = head;
    node *temp = nullptr;

    while (mover != nullptr)
    {
        temp = mover->back;      // store prev
        mover->back = mover->next;
        mover->next = temp;
        mover = mover->back;
    }
    if (temp != nullptr)
        head = temp->back;
    return head;
}

int main()
{
    int n=5;
   node *temp,*head,*mover; 
   head=create(n);
   cout<<"print_ele";
   head=reverse_DLL(head);
   print_ele(head);
return 0;
}