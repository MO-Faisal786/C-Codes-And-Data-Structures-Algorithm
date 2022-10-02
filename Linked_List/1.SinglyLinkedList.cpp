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


// insertion at begining
void insertAtHead(Node* &head, int val){
    Node* n = new Node(val);
    n->next = head;
    head = n;
}

// insertion at end
void insertAatTail(Node* &head, int val){

    if(head == nullptr){
        insertAtHead(head, val);
        return;
    }

    Node* n = new Node(val);
    Node* temp = head;
    while(temp->next != nullptr){
        temp = temp->next;
    }

    temp->next = n;
}


// searching a key in linkedlist
bool Search(Node* head, int key){
    Node* temp = head;

    while(temp!=nullptr){
        if(temp->data == key){
            return true;
        }
        temp = temp->next;
    }

    return false;
}


// deletion at begin or any position or end
void deletion(Node* &head, int val){

    if(head == nullptr){
        cout<<"can not delete from empty list...\n";
        return;
    }

    if(head->data == val){
        Node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }


    Node* temp = head;

    while(temp->next->data!=val){
        temp = temp->next;
    }

    Node* todelete = temp->next;

    temp->next = temp->next->next;

    delete todelete;
}


// traversing all linkedList
void disPlay(Node* head){
    Node* temp = head;

    while(temp!=NULL){
        cout<<temp->data<<"-> ";
        temp = temp->next;
    } cout<<"NULL"<<endl;
}

// Reversing a linkedList
Node* reverse(Node* &head){
    Node* prevptr = nullptr;
    Node* currptr = head;
    Node* nextptr;

    while(currptr!=nullptr){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
    }

    return prevptr;
}

// Reverse using recursion
Node* reverseRecursive(Node* &head){

    if(head == nullptr || head->next == nullptr){
        return head;
    }

    Node* newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = nullptr;
    return newhead;
}

// Reverse K nodes
Node* reverseKNodes(Node* &head, int k){
    Node* prevptr = nullptr;
    Node* currptr = head;
    Node* nextptr;

    int count = 0;
    while (currptr != nullptr && count < k) {
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;  
        count++;
    }

    if(nextptr != nullptr){
        head->next = reverseKNodes(nextptr, k);
    }
    
    return prevptr;           
}

// Making the cycle
void makeCycle(Node* &head, int pos){
    Node* temp = head;
    Node* startNode;    

    int count = 0;
    while (temp->next != nullptr)
    {
        if(count == pos){
            startNode = temp;
        }

        temp = temp->next;
        count++;
    }
    temp->next = startNode;
}

// Detecting the cycle in the linked list
bool detectCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    while (fast != nullptr && fast->next !=nullptr)
    {
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            return true;
        }
    }
    return false;
}

// Remove cycle from linked list
void removeCycle(Node* &head){
    Node* slow = head;
    Node* fast = head;

    do{
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;

    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = nullptr;
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

// To intersect the nodes
void intersect(Node* &head1, Node* &head2, int pos){

    Node* temp1 = head1;
    pos--;
    while (pos--)
    {
        temp1 = temp1->next;
    }

    Node* temp2 = head2;
    while (temp2->next != nullptr)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
    
}

// finding intersection point 
int interSection(Node* head1, Node* head2){
    int l1 = length(head1);
    int l2 = length(head2);

    int d = 0;
    Node* ptr1;
    Node* ptr2;
    
    if(l1>l2){
        d = l1-l2;
        ptr1 = head1; 
        ptr2 = head2;  
    } else {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }

    while (d)
    {
        ptr1 = ptr1->next;
        if(ptr1 == nullptr){
            return -1;
        }
        d--;
    }

    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if(ptr1 == ptr2){
            return ptr1->data;
        }
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
    }
    return -1;
    
}

// merge two sorted linkedlist 
Node* Merge(Node* &head1, Node* &head2){
    Node* ptr1 = head1;
    Node* ptr2 = head2;
    Node* dummyNode = new Node(-1);
    Node* ptr3 = dummyNode;

    while (ptr1 != nullptr && ptr2 != nullptr)
    {
        if(ptr1->data < ptr2->data){
            ptr3->next = ptr1;
            ptr1 = ptr1->next;
        } else {
            ptr3->next = ptr2;
            ptr2 = ptr2->next;
        }
        ptr3 = ptr3->next;
    }

    while (ptr1 != nullptr)
    {
        ptr3->next = ptr1;
        ptr1 = ptr1->next;
        ptr3 = ptr3->next;
    }
    
    while (ptr2 != nullptr)
    {
        ptr3->next = ptr2;
        ptr2 = ptr2->next;
        ptr3 = ptr3->next;
    }
    return dummyNode->next;
}

// Merging recursively
Node* mergeRecursive(Node* &head1, Node* &head2){
    if(head1 == nullptr){
        return head2;
    }
    if(head2 == nullptr){
        return head1;
    }

    Node* result;
    if(head1->data < head2->data){
        result = head1;
        result->next = mergeRecursive(head1->next, head2);
    } else {
        result = head2;
        result->next = mergeRecursive(head1, head2->next);
    }
     
    return result;
}

void evenAfterodd(Node* &head){
    Node* odd = head;
    Node* even = head->next;
    Node* startEven = even;

    while (odd->next!=nullptr && even->next!=nullptr)
    {
        odd->next = even->next;
        odd = odd->next;

        even->next = odd->next;
        even = even->next;
    }
    odd->next = startEven;
    if(odd->next == nullptr){
        even->next = nullptr;
    }
}

// Main function
int main(){
    
    // Node* head = nullptr;

    // insertAatTail(head, 1);
    // insertAatTail(head, 7);
    // insertAatTail(head, 2);
    // insertAatTail(head, 3);
    // insertAatTail(head, 4);

    // disPlay(head);

    // insertAtHead(head, 6);
    // disPlay(head);

    // cout<<Search(head, 5)<<"\n";
    // cout<<Search(head, 4);

    // deletion(head, 3);
    // disPlay(head);

    // deletion(head, 6);
    // disPlay(head);

    // Node* newhead = reverseRecursive(head);
    // disPlay(newhead);

    // Node* newhead = reverseKNodes(head, 2);
    // disPlay(newhead);

    // makeCycle(head, 3);
    // disPlay(head);

    // cout<<detectCycle(head) << endl;

    // removeCycle(head);

    // cout<<detectCycle(head) << endl;
    // disPlay(head);


    // // for intersection point 
    // Node* head1 = nullptr;
    // Node* head2 = nullptr;

    // insertAatTail(head1, 1);
    // insertAatTail(head1, 2);
    // insertAatTail(head1, 3);
    // insertAatTail(head1, 4);
    // insertAatTail(head1, 5);
    // insertAatTail(head1, 6);

    // insertAatTail(head2, 9);
    // insertAatTail(head2, 10);

    // intersect(head1, head2,6);
    // disPlay(head1);
    // disPlay(head2);

    // cout<<interSection(head1, head2);

    // // toMerge two sorted linkedlist

    // Node* head1 = nullptr;
    // Node* head2 = nullptr;
    // int arr1[] = {1,3,5};
    // int arr2[] = {2,4,6};

    // for (int i = 0, j = 0; i < 3; i++, j++)
    // {
    //     insertAatTail(head1, arr1[i]);
    //     insertAatTail(head2, arr2[j]);
    // }
    
    // Node* newhead = Merge(head1, head2);
    // disPlay(newhead);

    // Node* newhead = mergeRecursive(head1, head2);
    // disPlay(newhead);

    Node* head = nullptr;
    int arr[] {1,2,3,4,5,6};
    for (int i = 0; i < 6; i++)
    {
        insertAatTail(head, arr[i]);
    }
    

    evenAfterodd(head);
    disPlay(head);

    return 0;
}