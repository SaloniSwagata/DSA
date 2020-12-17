// Implementation of Kadane's Algorithm
// Maximum Sum SubArray Array

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    //User Input
    for(int i=0;i<n;i++)
    cin >> arr[i];

    int currSum =0;
    int maxSum = INT_MIN;

    //If Sum < 0, discard the subarray, else store the maximum sum subarray
    for(int i=0;i<n;i++)
    {
        currSum+=arr[i];
        if (currSum<0)
        currSum=0;

        maxSum = max(maxSum,currSum);
    }

    cout << maxSum << endl;
}