//Given a positive integer N, print count of set bits in it. 

#include <iostream>
using namespace std;
int main()
{
    int N;
    cout << "Enter a number ";
    cin >> N;
    int count = 0;
    while(N!=0)
    {
        N = N&(N-1); //Set's the least significant set bit to 0
        count+=1;
    }
    cout << "Number of set bits: " <<count;
    return 0;
}