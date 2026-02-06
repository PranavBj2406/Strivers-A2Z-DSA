#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* prev;
    Node* next;

    Node(int val) {
        data = val;
        prev = nullptr;
        next = nullptr;
    }
};

Node* createDLL(int arr[], int n) {
    if (n == 0) return nullptr;

    Node* head = new Node(arr[0]);
    Node* curr = head;

    for (int i = 1; i < n; i++) {
        Node* newNode = new Node(arr[i]);
        curr->next = newNode;
        newNode->prev = curr;
        curr = newNode;
    }

    return head;
}

void printDLL(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node *delete_nodes_withvalK(Node *head,int k)
{
    Node *prevnode;
    Node *nextnode;
    Node *temp=head;  
    while(temp!=nullptr)
    {
        if(temp->data==k) // delete the element 
        {
            if(temp==head)
            {
                head=head->next;
            }
            nextnode=temp->next;
            prevnode=temp->prev;
            if(nextnode)
            {
                prevnode->next=nextnode; 
            } 
            if(prevnode)
            {
                nextnode->prev=prevnode;
            }
            
        }
        else{
            temp=temp->next;
        }
    }
    return head;
}

// identify pairs with sum K

vector<pair<int,int>> identify_sum(Node *head,int k) // brute force approach o(n^2)
{
    vector<pair<int,int>> pr;
    Node *t1=head;
    while(t1!=nullptr)
    {
        Node *t2=t1->next;
        while(t2!=nullptr)
        {
            int sum=(t1->data+t2->data);
            if(sum>k) exit;
            if(sum==k)
            {
                pr.push_back({t1->data,t2->data});    
                t2=t2->next;
            }
            else
            {
                t2=t2->next;
            }
        }
        t1=t1->next;
    }
    return pr;
}


vector<pair<int,int>> identify_sum_2(Node *head,int k)
{
    vector<pair<int,int>> pr;
    Node *left=head;
    Node *right=head;
    while(right->next!=nullptr)
    {
        right=right->next;
    }
    while(left!=right && left->prev!=right)
    {
        int sum = left->data+right->data;
        if(sum<k)
        {
            left=left->next;
        }
        else if(sum>k)
        {
            right=right->prev;
        }
        else
        {
            pr.push_back({left->data,right->data});
            left=left->next;
            right=right->prev;
        }
    }
    return pr;
    
}

Node *remove_duplicates(Node *head)
{
    int curr;
    Node *temp1=head;
    Node *temp2=temp1->next;
    curr=temp1->data;
    while(temp2!=nullptr)
    {
        if(temp2->data==curr)
        {
            Node *dummy=temp2;
            temp2=temp2->next;
            temp1->next=temp2;
           if(temp2 !=nullptr)
           {
            temp2->prev=temp1;
           }
           delete dummy;
        }
        else
        {
            temp1->next=temp2;
            temp2->prev=temp1;
            temp1=temp2;
            temp2=temp2->next;
            curr=temp1->data;
        }
    }
    return head;
}

Node* remove_duplicates_2(Node* head)
{
    if (head == nullptr || head->next == nullptr)
        return head;

    Node* temp1 = head;          // last unique node
    Node* temp2 = head->next;    // traversal pointer

    while (temp2 != nullptr)
    {
        if (temp2->data == temp1->data)
        {
            Node* dummy = temp2;
            temp2 = temp2->next;

            temp1->next = temp2;
            if (temp2 != nullptr)
                temp2->prev = temp1;

            delete dummy;
        }
        else
        {
            temp1 = temp2;
            temp2 = temp2->next;
        }
    }
    return head;
}

int main() {
    int arr[] = {1,1,1,1,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k=5;
    Node* head = createDLL(arr, n);
    // printDLL(head);
    // vector<pair<int,int>> pr=identify_sum_2(head,k);
    // for(auto it:pr)
    // {
    //     cout<<endl;
    //     cout<<it.first<<","<<it.second<<endl;
    // }
    head=remove_duplicates(head);
    printDLL(head);
    return 0;
}
