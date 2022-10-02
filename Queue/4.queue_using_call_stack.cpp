#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st1;

    public:
        void push(int x){
            st1.push(x);
        }

        int pop(){
            if(st1.empty()){
                cout<<"queue underflow...\n";
                return -1;
            }

            int x = st1.top();
            st1.pop();
            if(st1.empty()){
                return x;
            }

            int item = pop();
            st1.push(x);
            int* ptr = &item;
            delete ptr;
        }

        int peek(){
            if(st1.empty()){
                cout<<"queue underflow...\n";
                return -1;
            }

            int x = st1.top();
            st1.pop();
            if(st1.empty()){
                return x;
            }

            int item = peek();
            st1.push(x);
            return item;

        }

        bool empty(){
            if(st1.empty()){
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

    cout<<q.empty()<<"\n"; 



    return 0;
}