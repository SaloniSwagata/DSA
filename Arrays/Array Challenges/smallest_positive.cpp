// Smallest Positive Missing Number
// Find the smallest positive missing number in the given array.
//Example: [0, -10, 1, 3, -20], Ans = 2 

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

    //Setting an array with each element as false
    bool checker[lim];
    for(int i=0;i<lim;i++)
    checker[i]=false;
    
    //If the number is positive, it's corresponding position in array is set as true

    for(int i=0;i<n;i++)
    {
        if (arr[i]>=0)
        checker[arr[i]]=true;
    }

    for(int i=0;i<lim;i++)
    {
        if (checker[i]==false)
        {
            cout << i << endl;
            return 0;
        }
    }
    
}