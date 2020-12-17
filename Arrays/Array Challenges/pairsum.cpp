
// Pair Target Sum Problem
// Find whether there exist 2 numbers that sum to K

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int arr[n];

    //User Input
    for(int i=0;i<n;i++)
    cin >> arr[i];


    //Sorting the array 
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

    int st=0,en=n-1;

    while(st<=en)
    {
        if (arr[st]+arr[en] == k)
        {
            cout << arr[st] <<" " << arr[en] << endl;
            return 0;
        }
        else if (arr[st]+arr[en] > k)
        {
            en--;
        }
        else
        {
            st++;
        } 
    }

    cout << -1 << endl;
    return 0;
}