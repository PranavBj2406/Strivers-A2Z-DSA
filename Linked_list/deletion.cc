
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

Node *create(int n,int &size) // maintining nly head
{
    int data;           //data of the node
    Node *temp,*mover;  // temp ptr for node cretaed , mover indication
    cout<<"enter the data"<<endl;
    cin>>data;
    Node *head=new Node(data,nullptr); // create head assign data
    size++;
    mover=head; // mover is intially head;
    for(int i=0;i<n-1;i++)
    {
        cout<<"Enter the values of the data"<<endl;
        cin>>data;
        temp=new Node(data,nullptr);
        size++;
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
        cout<<trv->data<<" -> ";
        trv=trv->next;
    }
    cout<<"/n";
}

Node *deletehead(Node *head,int &size)
{
    if(head==nullptr)
    {
        cout<<"No nodes present"<<endl;
        return head;
    }
    Node *mover=head;
    head=head->next;
    delete mover;
    size--;
    return head;
}

Node *deleteend(Node *head,int &size)
{
    if(head==nullptr)
    {
        return head;
    }
    Node *mover=head;
    Node *mover2=mover->next;
    if(mover2==nullptr)
    {
        delete head;
        size--;
        return nullptr;
    }
    while(mover2->next!=nullptr)
    {
        mover2=mover2->next;
        mover=mover->next;
    }
    mover->next=nullptr;
    delete mover2;
    size--;
    return head;
}

Node *delete_at_index(int index,Node *head,int &size)
{
    int count=0;
    if(head==nullptr)
    {
        return head;
    }
    if(size<=index || index<0)
    {
        cout<<"invalid index"<<endl;
        return head;
    }
    Node *mover=head;
    Node *mover2=mover->next;
    if(index==0)
    {
        head=head->next;
        size--;
        delete mover;
        return head;
    }
    while(count<index-1)
    {
        count++;
        mover=mover->next;
        mover2=mover2->next;
    }
    mover->next=mover2->next;
    delete mover2;
    size--;
    return head;
}

int main(){
    int n=2;
    int size=0;
    Node *head=create(n,size);
    traversal(head);
    int index;
    cin>>index;
    head=delete_at_index(index,head,size);
  traversal(head);
}