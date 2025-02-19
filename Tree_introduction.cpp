#include<iostream>
using namespace std;
struct Node{
    int data;
    Node *left;
    Node *right;

    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

void preorder(Node* root){
    if(root==nullptr){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
    if(root==nullptr){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void postorder(Node* root){
    if(root==nullptr){
        return;
    }
    postorder(root->left);
    cout << root->data << " ";
    postorder(root->right);
}

int main()
{
    struct Node *root = new Node(1);
    root->left=new Node(2);
    root->right = new Node(3);
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);

    preorder(root);
    inorder(root);
    postorder(root);

    return 0;
}