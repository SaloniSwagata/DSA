// Array as an abstract data type using C language

#include <stdio.h>
#include<stdlib.h>
struct myArray
{
    int total_size;
    int used_size;
    int *ptr;
};

void createArray(struct myArray * a, int tSize, int uSize)
{
    a->total_size = tSize;
    a->used_size = uSize;
    a->ptr = (int*)malloc(tSize*sizeof(int));
}

void show(struct myArray *a)
{
    for(int i=0;i<a->used_size;i++)
    printf("%d\n", (a->ptr)[i]);
}

void setVal(struct myArray *a)
{   int n;
    for(int i=0;i<a->used_size;i++)
    {
        printf("Enter an element\n");
        scanf("%d",&n);
        (a->ptr)[i] = n;
    }
}

int main()
{
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("We are running setVal method now \n");
    setVal(&marks);
    printf("We are running show method now \n");
    show(&marks);
    return 0;
}