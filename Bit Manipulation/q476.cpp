//Given a positive integer N. The task is to check if N is a power of 2

#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number ";
    cin >> n;
    if (n && !(n&n-1)==1)
    cout << "Powe of 2";
    else
    cout << "Powe of 2";
    return 0;
}
