//You are given two numbers A and B. The task is to count the number of bits needed to be flipped to convert A to B.

#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cout << "Enter the two numbers ";
    cin >> A >> B;
    int diffnos = A^B; //The positions with set bits are the positions that have to be modified
    int count=0;
    while(diffnos!=0)
        {
            diffnos=diffnos&(diffnos-1);//Set's the least significant set bit to 0
            count=count+1;
        }
    cout << "Number of bits to be changed: " <<count;
    return 0;
}