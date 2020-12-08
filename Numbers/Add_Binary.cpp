#include<iostream>
using namespace std;

int reverse(int n)
{
    int rev = 0;
    while(n>0)
    {
        int lastDigit = n%10;
        rev = rev*10 + lastDigit;
        n/=10;
    }
    return rev;
}

int addBinary(int a, int b)
{
    int ans=0;
    int prevcarry=0;
    while(a>0 && b>0)
    {
        if (a%2 == 0 && b%2 == 0)
        {
            ans = ans*10 + prevcarry;
            prevcarry = 0;
        }

        else if((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if (prevcarry == 1)
            {
                ans = ans*10 + 0;
                prevcarry = 1;
            }
            else
            {
                ans = ans*10 +1;
                prevcarry = 0;
            }
            
        }
        else{
            ans = ans*10 + prevcarry;
            prevcarry = 1;
            
        }
        a = a/10;
        b = b/10;

    }
    while (a>0)
    {
        if (a%2 == 0)
        {
            ans = ans*10 + 0 + prevcarry;
            if (prevcarry == 1)
            prevcarry = 0;
        }
        else
        {
            if (prevcarry == 1)
            {
                ans = ans*10 + 0;
            }
            else
            {
                ans = ans*10 + 1;
            }
            
        }
        a = a/10;
    }

    while (b>0)
    {
        if (b%2 == 0)
        {
            ans = ans*10 + 0 + prevcarry;
            if (prevcarry == 1)
            prevcarry = 0;
        }
        else
        {
            if (prevcarry == 1)
            {
                ans = ans*10 + 0;
            }
            else
            {
                ans = ans*10 + 1;
            }
            
        }
        b = b/10; 
    }

    if (prevcarry == 1)
    ans = ans*10 + 1;

    ans = reverse(ans);
    return ans;
}

int main()
{
    int a, b, s;
    cout << "Enter two binary numbers" << endl;
    cin >> a >> b;
    s = addBinary(a,b);
    cout << "The Binary Sum is = " << s << endl;
}