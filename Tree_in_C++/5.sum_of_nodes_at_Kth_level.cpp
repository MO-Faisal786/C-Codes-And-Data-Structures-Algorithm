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

int sumAtk(Node* root, int k){

    if(root == nullptr){
        return -1;
    }
        
    queue<Node*> q;
    q.push(root);
    q.push(nullptr);
    int level = 0;
    int ans = 0;

    while (!q.empty())
    {
        Node* node = q.front();
        q.pop();
        if(node != nullptr){
            if(level == k){
                ans+=node->data;
            }
            if(node->left){
                q.push(node->left);
            }
            if(node->right){
                q.push(node->right);
            }
        } else if(!q.empty()){
            q.push(nullptr);
            level++;
        }

    }    
    return ans;
}

int main(){

    Node* root = new Node(1);
    root->left = new Node(2);

    root->right = new Node(3);
    root->left->left = new Node(4);

    root->left->right = new Node(5);
    root->right->left = new Node(6);

    root->right->right = new Node(7);

    cout<<sumAtk(root, 0);
    return 0;
}