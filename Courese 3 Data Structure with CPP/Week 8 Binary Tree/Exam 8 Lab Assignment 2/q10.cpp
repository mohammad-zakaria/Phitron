/*











Question:  Traverse the following binary tree using the inorder, preorder,  postorder, and level order techniques.
 Level each of the nodes of the tree. Also, find the height of the tree.



Inorder :  6 -> 8 -> 9 -> 11 -> 12-> 14 -> 15 -> 20 ->26 -> 30 -> 35
Preorder: 15 -> 11 -> 8 -> 6-> 9 -> 12 -> 14 ->  26 -> 20 -> 30 -> 35
Postoder: 6 -> 9 ->  8 -> 14 -> 12 -> 11 -> 20 -> 35 -> 30 -> 26 -> 15
Level Order : 15 -> 11 -> 26 -> 8 -> 12 ->20 ->30 -> 6 ->9 ->14 ->35

Height of the tree: 4

root Node is 15 and it is at level: 0
Node 11 and 26 are at level : 1
Node 8, 12, 20, 30 are at level : 2
Node 6, 9, 14, 35 are at level : 3

Question: Draw a binary tree using the given preorder and inorder sequences 			(5)
    Preorder: ABDEFCG
    Inorder: DBFEACG

binaray tree is:
        A
       / \
      B   C
     / \   \
    D  E    G
        \
        F





Q3: Draw a binary tree using the given preorder and postorder sequences 			(5)
     Inorder: DBEFAGC
     Postorder: DFEBGCA

binaray tree is:
        A
       / \
      B   C
    / \   /
    D  E  G
        \
        F



Q4. 4	Draw a max-heap and min-heap trees from the following data
where X=last digits of your birth month + 1 .
data = 10  20 8 99 X 15 17
Draw a max-heap and min-heap trees from the following data where
X=last digits of your birth month + 1 . 10 40 20 8 99 X 15 17
my bith month is july if i take 8 the data becomes duplicate, so i
take here X = totalmonthsofyear+1 = 12+1 = 13

considering X = 13, the data are 10 20 8 99 13 15 17
draw max-heap tree:
            99
           /  \
          40   20
         /  \  / \
        17   10 13 15
       /
    8

min-heap tree:
            8
           /  \
          10   13
         /  \  / \
        17   99 20 15
       /
    40


// Use HeapSort to Sort the Data in Descending Order.
Show the status of the array and heap in each iteration.
Data: 20 50 40 5 30 15

Heap  with the array data:
           5
         /    \
        20    15
       /  \    /
    50  30    40

after every iteration pop the root and heapify the heap
iterartion 1: 5 is popped
           15
         /    \
        20    40
       /  \    /
    50  30
Status of the array: 15 20 40 50 30 5 (5 sorted)
iteration 2: 15 is popped
           20
         /    \
        30    40
       /  \    /
    50
Status of the array: 20 30 40 50 15 5 (15->5 sorted)
iteration 3: 20 is popped
           30
         /    \
        50    40
status of the array: 30 50 40 20 15 5 (20->15->5 sorted)
iteration 4: 30 is popped
           40
         /    \
        50
status of the array: 40 50 30 20 15 5 (30->20->15->5 sorted)
iteration 5: 40 is popped
           50
status of the array: 50 40 30 20 15 5 (40->30->20->15->5 sorted)
iteration 6: 50 is popped
status of the array: 50 40 30 20 15 5 (50->40->30->20->15->5 sorted)





Draw a binary search tree
for the following data 10 40 20 8 99 16 15 17 11 14 1.
Can We insert duplicate values in BST?
State your opinion with a logical explanation.

Binary search tree for the data 10 40 20 8 99 16 15 17 11 14 1
        10
       /  \
      8   40
     /    / \
    1    20  99
       /
      16
      / \
    15  17
    /
    11
     \
        14



//  Can We insert duplicate values in BST?
State your opinion with a logical explanation

answer: No we can't insert duplicate values in BST because in BST the left child of a node is always less than the node and the right child of a node is
always greater than the node. so if we insert duplicate values in BST then the BST will not be a BST anymore.


Question: .Perform the Following Operations on the BST given in the Figure below.
1. Delete 12
2. Insert 11
 3. Delete 6

Here inorder traersal is  1 3 4 5 6 7 8 9 10 12 13 15 17
after deleting 12
1. Delete 12:
inorder traversal is 1 3 4 5 6 7 8 9 10 13 15 17
as  12 is the leaf node, we just swap it with the last node and delete the last node
after deleting 12
             7
          /     \
         5      10
        / \    / \
       3   6  9    15
      / \    /     / \
     1  4    8    13 17

inorder : 1 3 4 5 6 7 8 9 10 13 15 17
After inserting 11
The new tree is:
             7
          /     \
         5      10
        / \    / \
       3   6  9    15
      / \    /     / \
     1  4    8    13 17
                /
                11

Deleting 6
 6 is a leaf node, so we just swap it with the last node and delete the last node
             7
          /     \
         5      10
        /      / \
       3     9    15
      / \    /     / \
     1  4    8    13 17
                /
                11
Inorder: 1 3 4 5 7 8 9 10 11 13 15 17



// q8: Given Infix Notation: (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))
Convert it into Prefix Notation using Stack.
After converion prefix notation is -*5+^62-7/26+*7+81*54

Status of the stack after each operation

Stack | prefix


nfix: (5*((6^2)+(7-(2/6))))-((7*(8+1))+(5*4))
Postfix: 562^726/-+*781+*54*+-

// HeapSort is more efficient than Counting Sort. why?
answer: Counting sort is more efficient than HeapSort because in counting sort we have to find the maximum element in the array and then we have to
create an array of size maximum element and then we have to traverse the array and increment the count of the element in the array of size maximum element
and then we have to traverse the array of size maximum element and print the element according to the count of the element in the array of size maximum element
but in HeapSort we have to create a heap and then we have to pop the root and heapify the heap and then we have to print the root and then we have to heapify the heap


Time complexity of Counting sort is O(n+k) where n is the number of elements in input array and k is the range of input.
Time complexity of HeapSort is O(nlogn) where n is the number of elements in input array.
Space complexity of Counting sort is O(n+k) where n is the number of elements in input array and k is the range of input.
Space complexity of HeapSort is O(1) because we are not using any extra space.



*/
/*



 the merits and demerits of a doubly linked list over
 a linear linked list?



Merits of doubly linked list over linear linked list:
1. In doubly linked list we can traverse the list in both directions.
2. In doubly linked list we can delete a node in O(1) time.
3. In doubly linked list we can insert a node in O(1) time.

Demerits of doubly linked list over linear linked list:
1. In doubly linked list we have to store two pointers for each node.
2. In doubly linked list we have to traverse the list to find the previous node of a node.
3. In doubly linked list we have to traverse the list to find the next node of a node.
4. Uses more memory than linear linked list.

Show the status of a QUEUE and PRIORITY QUEUE for the following operations, where the QUEUE is implemented by an array of sizes, m=3.
Here, Enqueue and Dequeue mean insert and delete respectively, and x=9, y=x+3, z=x+y, and p=y+z.
Enqueue(z), Enqueue(p), Dequeue(), Enqueue(y), Enqueue(z)

Here ,
x = 9
y = x+3 = 9+3 = 12
z = x+y = 9+12 = 21
p = y+z = 12+21 = 33

Queue is implemented by an array of size 3.So queue can hold only 3 elements at a time.
Enqueue(z): 21 is inserted in the queue.
The status of the queue is: 21
Enqueue(p): 33 is inserted in the queue.
The status of the queue is: 21 33
Dequeue(): 21 is deleted from the queue.
The status of the queue is: 33
Enqueue(y): 12 is inserted in the queue.
The status of the queue is: 33 12
Enqueue(z): 21 is inserted in the queue.
The status of the queue is: 33 12 21
Front of the queue is 33 and rear of the queue is 21.


Priority Queue :
  Enqueue(z): 21 is inserted in the priority queue.
The status of the priority queue is: 21
Enqueue(p): 33 is inserted in the priority queue.
The status of the priority queue is: 33 21
Dequeue(): 33 is deleted from the priority queue.
The status of the priority queue is: 21
Enqueue(y): 12 is inserted in the priority queue.
The status of the priority queue is: 21 12
Enqueue(z): 21 is inserted in the priority queue.
The status of the priority queue is: 21 21 12

// Given the root of a binary tree, Write down a function
to invert the tree and return its root.
Node* invert_tree(Node* root)

Node* invert_tree(Node* root)
{
   // Base case: if root is NULL
   if(root == NULL)
      return root;
   // swap left subtree with right subtree
   Node* temp = root->left;
   root->left = root->right;
   root->right = temp;
   // recursively invert left subtree
   invert_tree(root->left);
   // recursively invert right subtree
   invert_tree(root->right);
   return root;

}


 Pseudo code for boundary traversal:

// left boundary traversal
Treenode * cur = root -> left;
  while (cur) {
    if (!isLeaf(cur)) res.push_back(cur -> data);
    if (cur -> left) cur = cur -> left;
    else cur = cur -> right;
  }

  // right boundary traversal
Treenode * cur = root -> right;
  vector < int > tmp;
  while (cur) {
    if (!isLeaf(cur)) tmp.push_back(cur -> data);
    if (cur -> right) cur = cur -> right;
    else cur = cur -> left;
  }
  for (int i = tmp.size() - 1; i >= 0; --i) {
    res.push_back(tmp[i]);
  }

 // leaf
if (isLeaf(root)) {
    res.push_back(root -> data);
    return;
  }
  if (root -> left) addLeaves(root -> left, res);
  if (root -> right) addLeaves(root -> right, res);

// store result in res

vector < int > res;
  if (!root) return res;
  if (!isLeaf(root)) res.push_back(root -> data);
  addLeftBoundary(root, res);

  addLeaves(root, res);

  addRightBoundary(root, res);
  return res;



// pseudocode of zigzag traversal 


leftToright = true;
while[(currentLevel != empty)
      x =pop()
if(leftToright){
       push(x.left)
      push(x.right)
}
else{
     push(x.right)
    push(x.left)
}
if(currentLevel.empty()){
   leftToright = !leftToright
   swap(currentLevel, nextLevel)
}















*/
