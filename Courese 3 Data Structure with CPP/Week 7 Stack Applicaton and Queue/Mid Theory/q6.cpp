/*
Assume that you are given a single linked list 14->25->33->47
 Write the statements to perform the following:
        i) To insert 40 in between 33 and 47.
        ii) To delete 14 from the list.
        iii) To make a linear circular linked list from the current list.
*/
// to insert 40 in between 33 and 47
// 1. create a new node
// 2. traverse the list to find the node 33
// 3. store the address of the next node of 33 in the next of the new node
// 4. store the address of the new node in the next of 33
// 5. traverse the list to find the node 47
// 6. store the address of the new node in the next of 47

// to delete 14 from the list
// 1. traverse the list to find the node 14
// 2. store the address of the next node of 14 in the next of the previous node of 14
// 3. delete the node 14

// to make a linear circular linked list from the current list
// 1. traverse the list to find the last node
// 2. store the address of the first node in the next of the last node

/*Write an algorithm to display the data stored in a doubly linked list in reverse order.
Assume only the head pointer is given for the linked list.*/
// 1. Start from the head node
// 2. Traverse the list from head to last node
// 3. Print the data of the node
// 4. Go to the previous node
// 5. Repeat steps 3 and 4 until the previous node is not null
// 6. End the algorithm

// 1. traverse the list to find the last node
// 2. print the data of the last node
// 3. store the address of the previous node of the last node in the last node
// 4. repeat the steps until the last node is the head node

/* Show the status of a STACK implemented by a linear linked list for the operations given below.
Here, x= Last day of your birthday + 5, y=x+3, and z=y+x.

Push(x+y), Push(y+z), Pop(), Push(y*z), Push(x*y), Pop(), Pop()

*/
// x = 4 + 5 = 9
// y = 9 + 3 = 12
// z = 12 + 9 = 21
// push(x+y) = 9 + 12 = 21
// status of the stack: 21
// push(y+z) = 12 + 21 = 33
// status of the stack: 21 33
// pop() = 33
// status of the stack: 21
// push(y*z) = 12 * 21 = 252
// status of the stack: 21 252
// push(x*y) = 9 * 12 = 108
// status of the stack: 21 252 108
// pop() = 108
// status of the stack: 21 252
// pop() = 252
// status of the stack: 21

// 1. create a new node
// 2. store the value of x+y in the data of the new node
// 3. store the address of the head node in the next of the new node
// 4. store the address of the new node in the head node
// 5. create a new node
// 6. store the value of y+z in the data of the new node
// 7. store the address of the head node in the next of the new node
// 8. store the address of the new node in the head node
// 9. store the address of the next node of the head node in the head node
// 10. create a new node
// 11. store the value of y*z in the data of the new node
// 12. store the address of the head node in the next of the new node
// 13. store the address of the new node in the head node
// 14. create a new node
// 15. store the value of x*y in the data of the new node
// 16. store the address of the head node in the next of the new node
// 17. store the address of the new node in the head node
// 18. store the address of the next node of the head node in the head node
// 19. store the address of the next node of the head node in the head node

// // Show the effect of each of the statements given in the following code using a Stack
// #include <stdio.h>
// #include <string.h>


// int top = -1;
// // Top value of the stack is set to -1 initially to indicate that the stack is empty at the beginning. 
// char Stack[4] = {'0'};
// // Here the stack is implemented using an array of size 4 to store the characters. 

// int main()
// {
//     char Str1[4] = {'0'};
//     char Str2[4] = {'0'};
//     // Two character arrays of size 4 are declared to store the strings named Str1 and Str2.
//     int i;
//     strcpy(Str1, "CSE");
//     // The string "CSE" is copied to the character array Str1.
//     // 
//     for (i = 0; i < 3; ++i)
//     {
//         Push(Str1[i]); // Push the characters of Str1 to the stack.
//         //If the the header file of stack is included, then the function Push() can be used to push the characters of Str1 to the stack.
//     }
//     for (i = 0; i < 3; ++i)
//     {
//         Str2[i] = Pop();
//     }
//     // Pop the characters from the stack and store them in the character array Str2.

//     printf("%s", Str2);
//     // Print the string Str2.
//     return 0;
// }

// void Push(char x)
// {
//     Stack[++top] = x;
//     return;
// }
// char Pop(void)
// {
//     return Stack[top--];
// }

// What are the merits of implementing a QUEUE using Array in a circular fashion? 
//How do you check the underflow and overflow in the QUEUE implemented circularly? 
/*
    // 1. The queue can be implemented circularly to avoid the wastage of space, time and memory.
     2. The underflow condition is checked by checking if the front and rear are equal.
     3. The overflow condition is checked by checking if the rear is equal to the size of the queue - 1.

*/

/* Show the status of a QUEUE for the following operations, where the QUEUE is implemented by an array of size, m=3.
 Here, Enqueue and Dequeue mean insert and delete respectively, and x=9,, y=x+3, z=x+y, and p=y+z.	 5
Enqueue(z), Enqueue(p), Dequeue(), Enqueue(y), Enqueue(z)

*/

/*
    x = 9
    y = 9 + 3 = 12
    z = 9 + 12 = 21
    p = 12 + 21 = 33
    enqueue(z) = 21
    status of the queue: 21
    enqueue(p) = 33
    status of the queue: 21 33
    dequeue() = 21
    status of the queue: 33
    enqueue(y) = 12
    status of the queue: 33 12
    enqueue(z) = 21
    status of the queue: 33 12 21
*/

/* Generate a pseudocode for solving the following problems within a time complexity of O(n^2)


Delete all of the consecutive elements from a Linear Linked List whose sum is equal to (Zero).	
*/
/*
// 6 -6 8 4 -12 9 8 -8
// sudo code for deleting the consecutive elements from a linear linked list whose sum is equal to zero
// 1. start from the head node
// 2. traverse the list from head to last node

// 3. store the data of the node in a variable
// 4. store the address of the next node in a variable
// 5. traverse the list from the next node to the last node
// 6. store the data of the node in a variable
// 7. store the address of the next node in a variable
// 8. if the sum of the data of the two nodes is equal to zero
// 9. then delete the node
// 10. repeat the steps until the last node is reached
// 11. if the sum of the data of the two nodes is not equal to zero
// 12. then move to the next node
// 13. repeat the steps until the last node is reached

 take the elements of the linked list from the user
    traverse from head to last node
    {
        store the data of the node in a variable
        store the address of the next node in a variable
        traverse from the next node to the last node
        {
            store the data of the node in a variable
            store the address of the next node in a variable
            if the sum of the data of the two nodes is equal to zero
            {
                then delete the node
            }
            else
            {
                move to the next node
            }
        }
    }

    

*/
// sodu code to solve this problem withing a time complexity of O(n^2)

/* Generate a pseudocode for solving the following problems within a time complexity of O(n^2)

        
*/