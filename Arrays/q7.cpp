//Write a program to cyclically rotate an array by one.

#include <iostream>
using namespace std;

int main() {
	//code
	int t=0;
	cin >> t;
	while(t>0)
	{
	    t-=1;
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin >> arr[i];
	    
	    cout << arr[n-1] << " ";
	    for(int i=0;i<(n-1);i++)
	    cout << arr[i] << " ";
	    
	    cout << endl; 
	    
	}
	return 0;
}