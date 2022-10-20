/*
    Given the root of a binary tree,
    make a function named int findTilt(Node* root) 
    and return the sum of every tree node's tilt. 
    The tilt of a tree node is the absolute difference between the sum of all left subtree node values and all right subtree node values. 
    If a node does not have a left child, then the sum of the left subtree node values is treated as 0. 
    The rule is similar if the node does not have a right child.

*/
#include<bits/stdc++.h>
using namespace std;

// Binary Tree node
struct Node {
    int data;
    struct Node *left, *right;
};

// function to find the tilt of a tree
// and return the sum of every tree node's tilt 
// the tilt of a tree node is the absolute difference between the sum of all left subtree node values and all right subtree node values.
// If a node does not have a left child, then the sum of the left subtree node values is treated as 0.
// The rule is similar if the node does not have a right child.


// find the sum 
int findSum(Node*root,  int &sum)
{
    if(root==NULL) return 0;
    int left = findSum(root->left, sum);
    int right = findSum(root->right, sum);
    sum += abs(left-right);
    return left+right+root->data;
}
// find the tilt
int findTilt(Node* root)
{
    if (root==NULL) return 0;
    int sum = 0;
    findSum(root, sum);
    return sum;
    
}