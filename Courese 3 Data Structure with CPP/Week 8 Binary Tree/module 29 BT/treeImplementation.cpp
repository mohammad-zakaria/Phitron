#include <bits/stdc++.h>

using namespace std;

// Binary Tree Implementation

// tree node
class treeNode
{
public:
    int data;
    treeNode *left;
    treeNode *right;
    treeNode(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
// function prototype
void printTree(treeNode *root, int level)
void spacePrint(int level)

/* Sample Binary Tree
        0
       /  \
      1    2
     / \   / \
    3  4   5  6
          /\
         7  8

    // Input Format
    9
    0 1 2
    1 3 4
    2 5 6
    3 -1 -1
    4 -1 -1

    5 7 8
    6 -1 -1
    7 -1 -1
    8 -1 -1

    // Output Format: Preorder
      root: 0
        left: 1
            left: 3
            right: 4
        right: 2
            left: 5
                left: 7
                right: 8
            right: 6



 */

// prinTree function
void printTree(treeNode *root, int level)
{
    if (root == NULL)
    {
        return;
    }
    cout << "root: " << root->data << endl;
    cout << "left: ";

    if (root->left != NULL)
    {
        cout << "left: " << root->left->data << endl;
        printTree(root->left, level + 1);
    }
    if (root->right != NULL)
    {
        cout << "right: " << root->right->data << endl;
        printTree(root->right, level + 1);
    }
}

// spacePrint function
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
    {
        cout << " ";
    }
}

int main()
{
    int n;
    cin >> n;

    // create the binary tree
    treeNode *allNodes[n];
    for (int i = 0; i < n; i++)
    {
        allNodes[i]->data = -1;

        int data, left, right;
        cin >> data >> left >> right;
        allNodes[i]->data = data;

        if (left != -1)
        {
            allNodes[i]->left = allNodes[left];
        }
        if (right != -1)
        {
            allNodes[i]->right = allNodes[right];
        }
    }

    // print the binary tree
    printTree(allNodes[0], 0);

    return 0;
}