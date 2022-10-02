#include<iostream>
using namespace std;
#define n 30

class queue{
    int* arr;
    int front;
    int back;

    public:
        queue(){
            arr = new int[n];
            front = -1;
            back = -1;
        }

        void push(int val){
            if(back == n-1){
                cout<<"queue Overflow...\n";
                return;
            }

            back++;
            arr[back] = val;

            if (front == -1)
            {
                front++;
            }
            
        }

        void pop(){
            if(front == -1 || front > back){
                cout<<"No element in the queue\n";
                return;
            }

            front++;
        }

        int peek(){
            if(front == -1 || front > back){
                cout<<"No element in the queue\n";
                return -1;
            }

            return arr[front];
        }

        bool empty(){
            if(front == -1 || front > back){
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

    q.pop();
    q.pop();
    q.pop();
    q.pop();
    cout<<q.peek()<<"\n";

    cout<<q.empty()<<"\n";

    q.pop();

    return 0;
}