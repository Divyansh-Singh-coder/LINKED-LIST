#include <stdio.h>
#include <stdlib.h>

/* Node structure for singly linked list */
struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;

/* Insert at end */
void insert_end(int value) {
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    struct node *temp = head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}

/* Insert at beginning */
void insert_begin(int value) {
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) return;
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

/* Insert at specific position (1-based index) */
void insert_at_pos(int value, int pos) {
    if (pos <= 1) {
        insert_begin(value);
        return;
    }
    struct node *temp = head;
    for (int i = 1; i < pos - 1 && temp != NULL; ++i) {
        temp = temp->next;
    }
    if (temp == NULL) {
        insert_end(value);
        return;
    }
    struct node *newNode = malloc(sizeof(struct node));
    if (!newNode) return;
    newNode->data = value;
    newNode->next = temp->next;
    temp->next = newNode;
}

/* Delete first occurrence of value */
void delete_value(int value) {
    struct node *temp = head;
    struct node *prev = NULL;

    while (temp != NULL && temp->data != value) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        printf("Value %d not found in list.\n", value);
        return;
    }

    if (prev == NULL) { /* deleting head */
        head = temp->next;
    } else {
        prev->next = temp->next;
    }
    free(temp);
    printf("Deleted %d from list.\n", value);
}

/* Display list */
void display() {
    struct node *temp = head;
    if (temp == NULL) {
        printf("List is empty!\n");
        return;
    }
    printf("Linked List: ");
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

/* Free all nodes before exit */
void free_list() {
    struct node *temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main() {
    int choice, value, pos;
    while (1) {
        printf("\n1. Insert at End\n2. Insert at Beginning\n3. Insert at Position\n4. Delete Value\n5. Display\n6. Exit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) break;

        switch (choice) {
            case 1:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_end(value);
                break;
            case 2:
                printf("Enter value: ");
                scanf("%d", &value);
                insert_begin(value);
                break;
            case 3:
                printf("Enter value and position: ");
                scanf("%d %d", &value, &pos);
                insert_at_pos(value, pos);
                break;
            case 4:
                printf("Enter value to delete: ");
                scanf("%d", &value);
                delete_value(value);
                break;
            case 5:
                display();
                break;
            case 6:
                free_list();
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
    free_list();
    return 0;
}
