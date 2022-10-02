#include<iostream>
using namespace std;

class Node{
    public: 
        int data;
        Node* prev;
        Node* next;

        Node(int val){
            data = val;
            prev = nullptr;
            next = nullptr;
        }
};

// insert at head
void insertAthead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    if (head != nullptr)
    {
        head->prev = n;
    }
    
    head = n;
}

// insert at end or tail
void insertAtTail(Node* &head, int val){

    if (head == nullptr)
    {
        insertAthead(head, val);
        return;
    }
    

    Node* n = new Node(val);

    Node* temp = head;
    while (temp->next != nullptr)
    {
        temp = temp->next;
    }

    temp->next = n;
    n->prev = temp;
    
}

// Delete at head
void deleteAtHead(Node* &head){
    Node* toDelete = head;
    head = head->next;
    head->prev = nullptr;

    delete toDelete;
}

// Deletion of a node
void deletion(Node* &head, int pos){

    if(pos == 1){
        deleteAtHead(head);
        return;
    }
    Node* temp = head;
    int count = 1;

    while (temp != nullptr && count != pos)
    {
        temp = temp->next;
        count++;
    }

    temp->prev->next = temp->next;

    if (temp->next != nullptr)
    {
        temp->next->prev =  temp->prev;
    }
    
    

    delete temp;
    
}

// toDisplay all element of our linkedlist
void dispaly(Node* head){
    Node* temp = head;
    while(temp != nullptr){
        cout<<temp->data<<"->";
        temp = temp->next;
    } cout<<"NULL"<<endl;
}

// finding the length  of linked list
int length(Node* head){
    int l = 0;
    Node* temp = head;
    while(temp != nullptr){
        l++;
        temp = temp->next;
    }

    return l;
}

// replace k nodes to the head
Node* appendKnodes(Node* &head, int k){

    Node* newTail;
    Node* newHead;
    Node* tail = head;

    int l = length(head);
    int count = 1;
    while (tail->next != nullptr)
    {
        if(count == l-k){
            newTail = tail;
        }
        if(count == l-k+1){
            newHead = tail;
        }
        count++;
        tail = tail->next;
    }

    newTail->next = nullptr;
    tail->next = head;

    return newHead;
    
}



int main(){

    Node* head = nullptr;
    int arr[] = {2,3,4,5,6};
    for(int i=0; i<5; i++){
        insertAtTail(head, arr[i]);
    }
    insertAthead(head, 1);

    dispaly(head);

    // deletion(head, 4);
    // dispaly(head);

    // Node* newhead = appendKnodes(head, 3);
    // dispaly(newhead);

    return 0;
}