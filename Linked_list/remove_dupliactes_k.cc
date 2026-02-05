#include <iostream>
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

int main() {
    int arr[] = {10, 4, 10, 10, 6, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    Node* head = createDLL(arr, n);
    printDLL(head);

    return 0;
}
