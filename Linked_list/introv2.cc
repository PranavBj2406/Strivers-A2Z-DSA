
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

pair<Node*,Node*> create(int n) // maintining nly head
{
    int data;           //data of the node
    Node *temp,*mover,*tail;  // temp ptr for node cretaed , mover indication
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
    tail=mover; // tail 
   return {head,tail};
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

Node *insert(int index,int data,Node *head,Node *tail) //always pass the nodes as aparams
{
    Node *temp,*mover;
    mover=head;  
    int count=0;
    if(head==nullptr) //no nodes
    {
        cout<<"The list is empty"<<endl;
        temp=new Node(data,nullptr);
        head=temp;
        return head;
    }
    if(count==index) // insert at satrt
    {
        temp=new Node(data,nullptr);
        temp->next=head;
        head=temp;     
        return head;  
    }
    while(count<index-1) // insert at index
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
    int n;
    cin>>n;
    Node *head,*tail;
    traversal(head);
return 0;
}