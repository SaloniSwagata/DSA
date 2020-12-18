//Calculate the transpose of a matrix
//Idea: Swap the elements present in the upper triangle (right diagonal)

#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    int arr[n][m];
    //Input
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Original Matrix - " << endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    //Transpose
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<m;j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }

    cout << "Transpose Matrix - " << endl;
     for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}