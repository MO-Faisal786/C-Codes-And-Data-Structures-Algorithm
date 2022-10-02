#include<iostream>
using namespace std;

class Node{
    public:

    int data;
    Node* next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class queue{
    Node* front;
    Node* back;

    public:
    queue(){
        front = nullptr;
        back = nullptr;
    }

    void push(int x){
        Node* n = new Node(x);

        if (front == nullptr)
        {
            front = n;
            back = n;
            return;
        }

        back->next = n;
        back = n;
        
    }

    void pop(){
        if(front == nullptr){
            cout<<"queue underflow...\n";
            return;
        }

        Node* todete = front;
        front = front->next;
        delete todete;
    }

    int peek(){
        if(front == nullptr){
            cout<<"queue underflow...\n";
            return -1;
        }
        return front->data;
    }

    bool empty(){
        if(front == nullptr){
            return true;
        }

        return false;
    }
};

int main(){

    queue q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.empty()<<"\n";

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek()<<"\n";

    cout<<q.empty();

    return 0;
}