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

struct Node* DeleteAtIndex(struct Node* head, int index)
{
    struct Node *p=head;
    struct Node *q = head->next;
    int i;
    for(i=0;i<index-1;i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}

struct Node* DeleteLastNode(struct Node* head)
{
    struct Node *p=head;
    struct Node *q=p->next;
    while(q->next!=NULL)
    {
        p=p->next;
        q=q->next;
    }

    p->next = NULL;
    free(q);
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
    
    head = DeleteAtIndex(head,2);
    printf("Linked List After Deletion at given index: \n");
    LinkedListTraversal(head);

    head = DeleteLastNode(head);
    printf("Linked List After Deletion from end: \n");
    LinkedListTraversal(head);
    return 0;
}