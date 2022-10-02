#include<iostream>
using namespace std;

// defining a linkedlist node 
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

// insert at head
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    if(head == nullptr){
        n->next = n;
        head = n;
        return;
    }
    Node* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->next = head;
    head = n;
}

// insertion at tail
void insertionAtTail(Node* &head, int val){
    if(head == nullptr){
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;

    while (temp->next != head)
    {
        temp = temp->next;
    }
    
    temp->next = n;
    n->next = head;
}

// Delete at head
void deleteAthead(Node* &head){
    Node* todelete = head;

    Node* temp = head;
    while (temp->next != head)
    {
        temp = temp->next;
    }
    
    temp->next = head->next;
    head = head->next;
    delete todelete;
}

// Deletion at specific position
void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAthead(head);
        return;
    }

    Node* temp = head;
    int count = 1;

    while (count != pos-1)
    {
        temp = temp->next;
        count++;
    }
    Node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

// searching in circularll
bool search(Node* head, int val){
    Node* temp = head;
    do
    {
        if(temp->data == val){
            return true;
        }
        temp = temp->next;
    } while (temp->next != head);
     return false;
}

// printing the list
void display(Node* head){
    Node* temp = head;

    do
    {
        cout<<temp->data<<"-> ";
        temp = temp->next;
    } while (temp != head); cout<<endl;
    
}



int main(){

    Node* head = nullptr;

    insertionAtTail(head, 2);
    insertionAtTail(head, 3);
    insertionAtTail(head, 4);
    insertionAtTail(head, 5);
    insertionAtTail(head, 6);

    insertAtHead(head, 1);
    display(head);

    // deletion(head, 6);
    // display(head);

    // deleteAthead(head);
    // display(head);

    // cout<<search(head, 4);

    

    return 0;
}