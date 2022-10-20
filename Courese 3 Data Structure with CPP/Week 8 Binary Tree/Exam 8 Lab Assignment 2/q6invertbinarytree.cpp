/*
Given the root of a binary tree, make a function named 
Node* invert_tree(Node* root) to invert the tree, and return its root


*/
#include<bits/stdc++.h>
using namespace std;

// Binary Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// function to invert the tree
Node* invert_tree(Node* root)
{
    if(root==NULL) return NULL;
    Node* temp = root->left;
    root->left = root->right;
    root->right = temp;
    invert_tree(root->left);
    invert_tree(root->right);
    // need to return the updated binary tree root
    return root;
}

// function to print the tree
void print_tree(Node* root)
{
    if(root==NULL) return;
    print_tree(root->left);
    cout<<root->data<<" ";
    print_tree(root->right);
}
