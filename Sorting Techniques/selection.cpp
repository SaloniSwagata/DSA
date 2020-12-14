//Selection Sort
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
    for(int i=0;i<n-1;i++)
    {
        for(int j = i+1;j<n;j++)
        {
            if (arr[j]<arr[i])
            {
                int temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    //Printing
    for(int i=0;i<n;i++)
    cout<<arr[i];

    return 0;
}