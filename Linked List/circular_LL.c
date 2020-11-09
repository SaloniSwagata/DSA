#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void CircularLinkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}
struct Node* insertatfirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node*)malloc (sizeof(struct Node));
    ptr->data = data;

    struct Node *p = head;
    while(p->next!=head)
    p = p->next;

    p->next = ptr;
    ptr->next = head;

    head = ptr;
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
    third->next = head;

    printf("Original Circular Linked List: \n");
    CircularLinkedListTraversal(head);

    head = insertatfirst(head, 23);

    printf("Circular Linked List After Insertion at front: \n");
    CircularLinkedListTraversal(head);

    return 0;
}