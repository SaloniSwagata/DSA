#include <stdio.h>

void display(int arr[], int n)
{
    // Code for Traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void Reverse(int arr[], int size)
{
    // code for Reversal
    int n=size/2;
    int t=0;
    for (int i = 0; i < n; i++)
    {
        t=arr[i];
        arr[i]=arr[size-i-1];
        arr[size-i-1]=t;
    }  
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    display(arr, size);
    Reverse(arr, size);
    display(arr, size);
    return 0;
}