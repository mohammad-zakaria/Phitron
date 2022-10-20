/*
    A binary tree is uni-valued if every node in the tree has the same value. Given the root of a binary tree, 
    make a function named bool is_unival(Node* root) and return true if the given tree is uni-valued, or false otherwise.

*/

#include<bits/stdc++.h>
using namespace std;

// Binary Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// function to check if the tree is uni-valued
bool is_unival(Node* root)
{
    if(root==NULL) return true;
    if(root->left!=NULL && root->data!=root->left->data) return false;
    if(root->right!=NULL && root->data!=root->right->data) return false;
    return is_unival(root->left) && is_unival(root->right);
}