//Check if a word is palindrome or not

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[n];
    //Taking Input
    cin >> a;

    bool f=true;
    int st=0,en=n-1;
    while(st<en)
    {
        if (a[st]!=a[en])
        {
            f=false;
            break;
        }
        st++;
        en--;
    }

    if (f)
    cout << "Palindrome word";
    else
    cout << "Not Palindrome";

    return 0;
}