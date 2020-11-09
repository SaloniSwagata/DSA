#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};
void DoublyLinkedListTraversal(struct Node *ptr)
{
    while(ptr != NULL)
    {
        printf("Element is: %d\n", ptr->data);
        ptr = ptr->next;
    }
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
    head->prev = NULL;

    //Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev = head;

    //Link the third node to null
    third->data = 13;
    third->next = NULL;
    third->prev = second;

    DoublyLinkedListTraversal(head);
    return 0;
}