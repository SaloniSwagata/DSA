// Given a boolean 2D array of n x m dimensions where each row is sorted. Find the 0-based index of the first row that has the maximum number of 1's.
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int maxCount=0;
	    int row=0;
	    int rowN=0;
	    for(int i=0;i<n;i++)
	    {
	        int count=0;
	        for(int j=0;j<m;j++)
	        {
	            if (arr[i][j]==1)
	            {
	                count=m-j;
	                if (maxCount<count)
	                {
	                    maxCount=count;
	                    rowN=row;
	                }
	                break;
	            }
	        }
	        row++;
	    }
	    if (maxCount==0)
	    return -1;
	    else
	    return rowN;
	    
	}
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector< vector<int> > arr(n, vector <int>(m));
        for (int i = 0; i<n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>arr[i][j];
            } 
        }
        Solution ob;
        auto ans = ob.rowWithMax1s(arr, n, m); cout << ans <<"\n";
    }
    return 0;
}
