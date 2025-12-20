
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data1,Node *ptr1)
    {
        data=data1;
        next=ptr1;
    }
};

Node *create(int n)
{
    int data;           //data of the node
    Node *temp,*mover;  // temp ptr for node cretaed , mover indication
    cout<<"enter the data"<<endl;
    cin>>data;
    Node *head=new Node(data,nullptr); // create head assign data
    mover=head; // mover is intially head;
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter the values of the data"<<endl;
        cin>>data;
        temp=new Node(data,nullptr);
        mover->next=temp;
        mover=temp;
    }
   return head;
}

void traversal(Node *head) 
{
    Node *trv=head;
    while(trv!=nullptr)
    {
        cout<<trv->data;
        trv=trv->next;
    }
}

Node *insert(int index,int data)
{
    Node *temp,*mover;
    Node *head;
    mover=head;  
    int count=0;
    if(head==nullptr) //no nodes
    {
        cout<<"The list is empty"<<endl;
        temp=new Node(data,nullptr);
        head=temp;
    }
    if(count==index) // insert at satrt
    {
        temp=new Node(data,nullptr);
        temp->next=head;
        head=temp;       
    }
    while(count<index) // insert at index
    {
        mover=mover->next;
        count++;
    }
    temp=new Node(data,mover->next);
    mover->next=temp;
    return head;
}




int main()
{
    Node *head=create(5);
    traversal(head);
return 0;
}