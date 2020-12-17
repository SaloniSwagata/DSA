// First Repeating Element
// Given an array arr[] of size N. The task is to find the first repeating element in an
// array of integers, i.e., an element that occurs more than once and whose index of
// first occurrence is smallest.

// Input:
//7
//1 5 3 4 3 5 6
//Output:
//2

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    //Taking input
    for(int i=0;i<n;i++)
    cin>>arr[i];

    const int lim = 1e6 + 2;
    int min_indx = INT_MAX;
    //Setting an array with each element as -1
    int checker[lim];
    for(int i=0;i<lim;i++)
    checker[i]=-1;
    
    //If the number is present, store it's index.
    //If index is already stored, check for minimum

    for(int i=0;i<n;i++)
    {
        if (checker[arr[i]]!=-1)
        
        {
            min_indx = min(min_indx,checker[arr[i]]);
        }
        else
        {
            checker[arr[i]] = i;
        }
    }

    if(min_indx!=INT_MAX)
    cout << (min_indx+1) << endl;
    else
    {
        cout << -1 << endl;
    }
    
    return 0;
}