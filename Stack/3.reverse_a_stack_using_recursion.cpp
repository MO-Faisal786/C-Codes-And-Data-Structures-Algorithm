#include<iostream>
#include<stack>
using namespace std;

void insertAtbottum(stack<int> &st, int elem){

    if(st.empty()){
        st.push(elem);
        return;
    }
    int topElem = st.top();
    st.pop();
    insertAtbottum(st, elem);

    st.push(topElem);
}

void reverseStack(stack<int> &st){

    if(st.empty()){
        return;
    }

    int elem = st.top();
    st.pop();

    reverseStack(st);
    insertAtbottum(st, elem);
}

int main(){

    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // } cout<<endl;

    reverseStack(st);

    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    } cout<<endl;

    

    return 0;
}