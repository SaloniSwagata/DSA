//Searching whether an element is present in a matrix with all elements in ascending order (both in row and column)

#include<iostream>
using namespace std;

int main()
{
    int n,m,k;
    cin >> n >> m >>k;
    int arr[n][m];
    //Input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    //Searching from upper right corner
    int r=0,c=n-1;
    bool flag=false;

    while(r< m && c>=0)
    {
        if (arr[r][c]==k)
        {
            flag=true;
            break;
        }
        else if(arr[r][c]>k)
        c--;
        else
            r++;
        
    }
    if (flag)
    cout << "Element Found";
    else
    cout << "Element not found";
    return 0;
}