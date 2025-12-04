# LINKED-LIST

*COMPANY: CODETECH IT SOLUTIONS

*NAME: DIVYANSH

*INTERN ID: CT04DR1854

*DOMAIN: C PROGRAMMING

*DURATION: 4 WEEKS

*MENTOR: NEELA SANTOSH

#ABOUT TASK 2:-

A linked list is one of the most important data structures in C programming. It is used to store a collection of elements, but unlike arrays, a linked list does not store elements in continuous memory. Instead, it stores elements in separate memory locations and connects them using pointers. Each element in a linked list is called a node, and every node contains two parts: data and a pointer to the next node. This pointer creates a chain-like connection between nodes.

Linked lists are useful because they allow dynamic memory allocation. This means memory is used only when needed. We can easily add new nodes, remove nodes, or change their positions without moving the entire list. This makes linked lists more flexible than arrays. In arrays, inserting or deleting elements requires shifting other elements, but linked lists avoid this extra work.

There are different types of linked lists such as singly linked list, doubly linked list, and circular linked list. In this task, we work with a singly linked list, where each node points to the next node only. The last node points to NULL, which means the end of the list.

To create a linked list in C, we use a structure (struct) to define a node. Each node stores an integer data value and a pointer to the next node. We also maintain a pointer called head, which always points to the first node of the list. If the list is empty, then head is NULL.

In the program, several operations are implemented. The first operation is inserting a node at the end of the list. To do this, a new node is created and attached after the last node. If the list is empty, the new node becomes the head. The next operation is inserting at the beginning, where the new node simply becomes the first node and its pointer links to the previous head.

Another important operation is inserting at a specific position. This function allows the user to add a value at any index they want. If the position is 1, the node is added at the beginning. If the position is larger than the list size, the node is added at the end. This shows how flexible linked lists are.

The program also includes a delete operation, where the user can remove a node by entering the value they want to delete. The program searches for the value and removes the node if found. If the value is not present in the list, the program displays a message saying that the value was not found.

Another important function is display, which prints all the elements of the list in order. It shows the structure of the linked list using arrows like:

5 -> 10 -> 20 -> NULL

This helps the user understand the current state of the linked list after each operation.

Finally, before exiting the program, all nodes are deleted from memory using a cleanup function. This prevents memory leaks and is considered good programming practice.

Overall, linked lists are a powerful and flexible data structure. They allow efficient insertion and deletion and are widely used in many real-world applications like memory management, file systems, and implementing stacks and queues.

OUTPUT IMAGE:-<img width="1916" height="1022" alt="Image" src="https://github.com/user-attachments/assets/131ca466-5d90-427f-8dc6-6069716708e8" />
