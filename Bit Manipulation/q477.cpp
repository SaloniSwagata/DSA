//Given a number N having only one ‘1’ and all other ’0’s in its binary representation, find position of the only set bit.

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    if (n && (!(n & (n - 1))))
        {
        int pos=0;
        while (n>0){
        n=n>>1;
        pos++;
        }
        cout << "Position: " <<pos;
        }
        else
        cout << "More than 1 or no set bit present" ;
    return 0;
}