/*
Given the root of a binary tree, make a function named void average_level(Node* root) 
and print the average value of the nodes on each level.

*/

// node 
struct Node {
    int data;
    struct Node *left, *right;
};

// 
void average_level(Node *root)
{
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while (q.size() != 0)
    {
        Node *temp = q.front();
        double sum = 0;
        int count = 0;
        while (temp != NULL)
        {
            sum += temp->data;
            count++;
            q.pop();
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
            temp = q.front();
        }
        q.pop();
        if (q.size() != 0) q.push(NULL);
        cout << sum / count << " ";

    }

}