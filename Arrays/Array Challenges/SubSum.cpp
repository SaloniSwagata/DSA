//SubArray with Given Sum
//Given an unsorted array A of size N of non-negative integers, find a continuous subarray which adds to a given number S.

#include<iostream>
using namespace std;

int main(){
    int n,s;
    cin >> n >> s;
    int arr[n];
    //Taking input
    for(int i=0;i<n;i++)
    cin>>arr[i];

    //Taking start and end points
    int st=0,en=0,sum=0;

    while(en<n)
    {
        sum+=arr[en];
        while(sum>s)
        {
            sum-=arr[st];
            st++;
        }
        if (sum==s)
        {
            cout << st+1 << " " << en+1 << endl;
            return 0;
        }
        en++;
    }

    cout << -1 << endl;

    return 0;
}