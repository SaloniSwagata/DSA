//Bubble Sort
//Time Complexity - O(N^2)

#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    //Taking input
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //Sorting
    int counter = 1;
    while(counter<n)
    {
        for(int j=0;j<n-counter;j++){
            if(arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        counter++;
    }

    //Printing
    for(int i=0;i<n;i++)
    cout<<arr[i];

    return 0;
}