/*
2022204080 ÀÌ±³¿ø
*/

#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void insert_begin();
void insert_end();
void insert_pos();
void delete_begin();
void delete_end();
void delete_pos();
void reverseLinkedList();

struct node* head = NULL;

struct node {
    int data;
    struct node* next;
};

int main() {
    create();
    insert_end();
    insert_end();
    insert_end();
    insert_end();
    insert_end();
    display();

    reverseLinkedList();
    display();

    return 0;
}

void create() {
    struct node* temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data: ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL) head = temp;
    else {
        struct node* ptr = head;
        while (ptr->next != NULL) ptr = ptr->next;
        ptr->next = temp;
    }
}

void display() {
    if (head == NULL) {
        printf("Linked List is Empty\n");
        return;
    }
    printf("LinkedList : ");
    struct node* ptr = head;
    while (ptr != NULL) {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
    printf("\n");
}

void insert_begin() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    } else {
        temp-> next = head;
        head = temp;
    }
}

void insert_pos() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data :");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    } else {
        struct node* prev_ptr = NULL;
        struct node* ptr = head;
        printf("Enter position : ");
        int pos;
        scanf("%d", &pos);
        for (int i = 0; i < pos; ++i) {
            prev_ptr = ptr;
            ptr = ptr->next; 
        }
        temp->next = ptr;
        prev_ptr->next = temp;
    }
}

void insert_end() {
    struct node* temp = (struct node*)malloc(sizeof(struct node));
    printf("Enter node data : ");
    scanf("%d", &temp->data);
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        return;
    } else {
        struct node* ptr = head;
        while (ptr->next != NULL) ptr = ptr->next;
        ptr->next= temp;
    }
}

void delete_begin() {
    if (head == NULL) {
        printf("Linked List is empty I Nothing to delete\n");
        return;
    } else {
        struct node* ptr = head;
        head = head->next;
        free(ptr);
        printf("Node Deleted\n");
    }
}

void delete_end() {
    if (head == NULL) {
        printf("Linked List is empty I Nothing to delete\n");
        return;
    } else if (head->next == NULL) {
        struct node* ptr = head;
        head = ptr->next;
        free(ptr);
    } else {
        struct node* ptr = head;
        struct node* prev_ptr = NULL;
        while (ptr-> next != NULL) {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = NULL;
        free(ptr);
    }
}

void delete_pos() {
    printf("Enter node position to delete : ");
    int pos;
    scanf("%d", &pos);
    struct node* ptr = head;
    if (head == NULL) {
        printf("Linked List is empty\n");
        return;
    } else if (pos == 0) {
        ptr = head;
        head = ptr->next;
        free(ptr);
    } else {
        struct node* prev_ptr = NULL;
        for (int i = 0; i < pos; ++i) {
            prev_ptr = ptr;
            ptr = ptr->next;
        }
        prev_ptr->next = ptr->next;
        free(ptr);
    }
}

void reverseLinkedList() {
    struct node* prevNode, * curNode;
    if (head != NULL) {
        prevNode = head;
        curNode = head->next;
        head = head->next;

        prevNode->next = NULL;

        while (head != NULL) {
            head = head->next;
            curNode->next = prevNode;

            prevNode = curNode;
            curNode = head;
        }

        head = prevNode;

        printf("SUCCESSFULLY REVERSED LIST\n");
    }
}