/*
Problem Statement

You will be given a string S consisting of English captial letters. The characters of that string are connected like a binary tree. You can assume that ith (0 <= i <|S|) character is a node and there are some edges between those nodes. We call a text as the characters from root to a leaf node. There may be multiple texts in that binary tree. You need to tell how many texts are forming a palindrome?

Input Format

First line will contain string S.
Then the binary tree will be given in level order. If a node value is -1, that means there is no node.
Constraints

0 < |S| <= 20
Output Format

Output the number of texts that forms palindrome.

*/

#include <bits/stdc++.h>
using namespace std;


// Binary Tree node
class Node {
public:
    char data;
    Node *left, *right;

    Node(char data)
    {
        this->data = data;
        left = right = NULL;
    }
};
// function to check how many texts are forming a palindrome
void checkPalindrome(Node* root, string s, int &count)
{
    if(root==NULL) return;
    s += root->data;

    checkPalindrome(root->left, s, count);
    checkPalindrome(root->right, s, count);

    if(root->left==NULL && root->right==NULL)
    {
        string temp = s;
        reverse(temp.begin(), temp.end());
        if(temp==s) count++;
    }
    s.pop_back();

}
int main()
{
    string str;
    cin>>str;

    int root;
    cin>>root;

    Node* tree;
    tree = new Node(str[root]);
    queue<Node*> q;
    q.push(tree);

    while (!q.empty())
    {
        Node* temp = q.front();
        q.pop();

        int leftIndex, rightIndex;
        cin>>leftIndex>>rightIndex;

        Node *leftChild = NULL, *rightChild = NULL;
        if(leftIndex!=-1)
        {
            leftChild = new Node(str[leftIndex]);
        }
        if(rightIndex!=-1)
        {
            rightChild = new Node(str[rightIndex]);
        }
        temp -> left = leftChild;
        temp -> right = rightChild;
        if(leftChild!=NULL) q.push(leftChild);
        if(rightChild!=NULL) q.push(rightChild);

    }
    int count = 0;
    string sample = "";
    checkPalindrome(tree, sample, count);
    cout<<count<<endl;
    

    return 0;
}