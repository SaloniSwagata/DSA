// Maximum Sum Circular Subarray
#include<iostream>
#include<climits>
using namespace std;


int kadane(int arr[],int n)
{
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
    return maxSum;
}
int main(){
    int n;
    cin >> n;
    int arr[n];

    //User Input
    for(int i=0;i<n;i++)
    cin >> arr[i];

    int maxSum = INT_MIN;
    int nonwrapsum = kadane(arr,n);

    int totalsum = 0;
    for(int i=0;i<n;i++)
    {
        totalsum+=arr[i];
        arr[i]=-arr[i];
    }

    int wrapsum = kadane(arr,n);

    maxSum = max(nonwrapsum, (totalsum+wrapsum));

    cout << maxSum << endl;
    return 0;
}