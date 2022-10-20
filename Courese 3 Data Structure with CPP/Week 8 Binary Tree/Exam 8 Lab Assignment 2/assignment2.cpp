/* Q1. Given the roots of two binary trees, write a function named bool isSame(Node* root1, Node* root2) 
which will take two roots and check if they are the same or not. 
Two binary trees are considered the same if they are structurally identical, and the nodes have the same value.
*/

bool isSame(Node* root1, Node* root2) {
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    if (root1 == NULL || root2 == NULL) {
        return false;
    }
    if (root1->data != root2->data) {
        return false;
    }
    return isSame(root1->left, root2->left) && isSame(root1->right, root2->right);
}

/*
    Given the root of a binary tree, make a function named void level_order(Node* root) 
    and print the level order traversal of its nodes' values. (i.e., from left to right, level by level).
*/

void level_order(Node* root) {
    // print the level order traversal of its nodes' values
    // i.e from left to right, level by level
}

/*
    Q3. Given the root of a binary tree, make a function named void level_order_reverse(Node* root) and 
    output the bottom-up level order traversal of its nodes' values. 
    (i.e., from left to right, level by level from leaf to root).
*/
void level_order_reverse(Node* root) {
    // print the level order traversal of its nodes' values
    // i.e from left to right, level by level from leaf to root 
    stack <Node*> s;
    queue <Node*> q;
    q.push(root);
    while (!q.empty()) {
        Node* temp = q.front();
        q.pop();
        s.push(temp);
        if (temp->right) {
            q.push(temp->right);
        }
        if (temp->left) {
            q.push(temp->left);
        }
    }
    while (!s.empty()) {
        Node* temp = s.top();
        s.pop();
        cout << temp->data << " ";
    }

}
/*
    Q4. Given the root of a binary tree, make a function named bool isSymmetric(Node* root) 
    check whether it is a mirror of itself (i.e., symmetric around its center).
*/
bool isMirror(Node* root1, Node* root2) { // check if two trees are mirror of each other 
    if (root1 == NULL && root2 == NULL) {
        return true;
    }
    if (root1 == NULL || root2 == NULL) {
        return false;
    }
    if (root1->data != root2->data) {
        return false;
    }
    return isMirror(root1->left, root2->right) && isMirror(root1->right, root2->left);
}
bool isSymmetric(Node* root) {
    // is symetric around its center?  i.e. left subtree is mirror of right subtree
    if (root == NULL) {
        return true;
    }
    return isMirror(root->left, root->right);
}

/*
    Q5. 
    Given the root of a binary tree, make a function named void zigzag_order(Node* root) and 
    output the zigzag level order traversal of its nodes' values. 
    (i.e., from left to right, then right to left, then again left to right for the next level and this order will continue).

*/

void zigzag_order(Node*root)
{
    if ( root == NULL) return;
    queue<Node*> q;
    q.push(root);


    
}