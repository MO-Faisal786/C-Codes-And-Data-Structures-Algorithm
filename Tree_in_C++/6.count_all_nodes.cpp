#include<bits/stdc++.h>
using namespace std;

class Node
{   
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// // First Method
// int32_t numberOfNodes(Node* root){
//     if(root == nullptr){
//         return -1;
//     }

//     queue<Node*> q;
//     q.push(root);
//     q.push(nullptr);
//     int count = 0;

//     while (!q.empty())
//     {
//         Node* node = q.front();
//         q.pop();
//         if(node!=nullptr){
//             count++;
//             if(node->left){
//                 q.push(node->left);
//             }
//             if(node->right){
//                 q.push(node->right);
//             }
//         } else if(!q.empty()){
//             q.push(nullptr);
//         }
//     }
//     return count;

// }

// second method
int32_t numberOfNodes(Node* root){

    if(root == nullptr){
        return 0;
    }
    return numberOfNodes(root->left) + numberOfNodes(root->right) +1;
}

// sum of all nodes
int32_t sumOfNodes(Node* root){

    if(root == nullptr){
        return 0;
    }
    return sumOfNodes(root->left) + sumOfNodes(root->right) + root->data;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);

    root->right = new Node(3);
    root->left->left = new Node(4);

    root->left->right = new Node(5);
    root->right->left = new Node(6);

    root->right->right = new Node(7);

    cout<<numberOfNodes(root)<<"\n";
    cout<<sumOfNodes(root);


    return 0;
}