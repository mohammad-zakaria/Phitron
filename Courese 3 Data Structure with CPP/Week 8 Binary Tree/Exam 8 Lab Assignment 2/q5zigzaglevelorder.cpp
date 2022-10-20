/*
Given the root of a binary tree, make a function named void zigzag_order(Node* root) 
and output the zigzag level order traversal of its nodes' values. 
(i.e., from left to right, then right to left, then again left to right for the next level and this order will continue).

*/
#include<bits/stdc++.h>
using namespace std;

// Binary Tree node
struct Node {
    int data;
    struct Node *left, *right;
};
void zigzag_order(Node*root)
{
    if(root==NULL) return;

    stack<Node*> s1;
    stack<Node*> s2;

    s1.push(root);
    
    bool flag = true;
    while(!s1.empty() || !s2.empty())
    {
        if(flag)
        {
            while(!s1.empty())
            {
                Node* temp = s1.top();
                s1.pop();
                cout<<temp->data<<" ";
                if(temp->left) s2.push(temp->left);
                if(temp->right) s2.push(temp->right);
            }
            flag = false;
        }
        else
        {
            while(!s2.empty())
            {
                Node* temp = s2.top();
                s2.pop();
                cout<<temp->data<<" ";
                if(temp->right) s1.push(temp->right);
                if(temp->left) s1.push(temp->left);
            }
            flag = true;
        }
    }



}

struct Node* newNode(int data)
{
    struct Node* node = new struct Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}
 
// driver program to test the above function
int main()
{
    // create tree
    struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zigzag_order(root);
 
    return 0;
}