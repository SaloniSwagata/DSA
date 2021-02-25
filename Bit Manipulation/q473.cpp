// Given an array A containing 2*N+2 positive numbers, out of which 2*N numbers exist in pairs whereas the other two number occur exactly once and are distinct. Find the other two numbers.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int nums[n];
    for(int i=0;i<n;i++)
    cin >> nums[i];
    int Xor=0;
    for(int i=0;i<n;i++)
    {
     Xor=Xor^nums[i];
        }
        int setbitno = Xor & ~(Xor-1);
        int x=0;
        int y=0;
        for(int i=0;i<n;i++)
        {
            if (nums[i] & setbitno)
            x=x^nums[i];
            else
            
            y=y^nums[i];
        }
        cout << x <<" "<<y;

}