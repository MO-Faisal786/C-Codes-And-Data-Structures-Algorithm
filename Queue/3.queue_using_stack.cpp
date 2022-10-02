#include<iostream>
#include<stack>
using namespace std;

class queue{
    stack<int> st1;
    stack<int> st2;

    public:
        void push(int x){
            st1.push(x);
        }

        void pop(){
            if(st1.empty() and st2.empty()){
                cout<<"queue underflow...\n";
                return;
            }

            if(st2.empty()){
                while (!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
            }

            st2.pop();
        }

        int peek(){
            if(st1.empty() and st2.empty()){
                cout<<"queue underflow...\n";
                return -1;
            }

            if(st2.empty()){
                while (!st1.empty())
                {
                    st2.push(st1.top());
                    st1.pop();
                }
            }

            return st2.top();

        }

        bool empty(){
            if(st1.empty() and st2.empty()){
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