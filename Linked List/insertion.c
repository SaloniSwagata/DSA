#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void LinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct Node * InsertAtFront(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc (sizeof(struct Node));
    ptr->data = data;
    ptr->next = head;
    return ptr;
}

struct Node * InsertInBetween(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node*)malloc (sizeof(struct Node));
    struct Node *p = head;
    int i=0;
    while(i!=index-1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;

    //Allocate memory for Linked List in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    
    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    //Link the third node to null
    third->data = 13;
    third->next = NULL;

    printf("Original Linked List: \n");
    LinkedListTraversal(head);

    head = InsertAtFront(head, 56);
    printf("Linked List after insertion at front: \n");
    LinkedListTraversal(head);

    head = InsertInBetween(head, 25, 1);
    printf("Linked List after insertion in between: \n");
    LinkedListTraversal(head);
    return 0;
}