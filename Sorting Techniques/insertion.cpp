//Insertion Sort
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
    for(int i=1;i<n;i++)
    {
        int current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    //Printing
    for(int i=0;i<n;i++)
    cout<<arr[i];

    return 0;
}