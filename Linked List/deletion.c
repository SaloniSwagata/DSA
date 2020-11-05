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

struct Node* DeleteFirstNode(struct Node* head)
{
    struct Node *ptr=head;

    head = head->next;
    free(ptr);
    return head;
}

int main()
{
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;
    struct Node * fifth;
    struct Node * sixth;

    //Allocate memory for Linked List in heap
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));
    fifth = (struct Node *) malloc(sizeof(struct Node));
    sixth = (struct Node *) malloc(sizeof(struct Node));

    //Link first and second nodes
    head->data = 7;
    head->next = second;

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    //Link the third node to fourth
    third->data = 13;
    third->next = fourth;

    //Link the third node to fourth
    fourth->data = 15;
    fourth->next = fifth;

    //Link the fourth node to fifthS
    fifth->data = 17;
    fifth->next = sixth;

    //Link the sixth node to NULL
    sixth->data = 19;
    sixth->next = NULL;

    printf("Original Linked List: \n");
    LinkedListTraversal(head);

    head = DeleteFirstNode(head);
    printf("Linked List After Deletion from front: \n");
    LinkedListTraversal(head);
    
    return 0;
}