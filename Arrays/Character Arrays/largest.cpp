//Find the Largest word in a sentence

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char a[100];
    cin.ignore();
    //Taking Input
    cin.getline(a, n);
    cin.ignore();
    int i=0,maxst=0,st=0;
    int currlen=0,maxlen=0;
    while(true)
    {
        if (a[i]==' ' || a[i]=='\0')
        {
            maxlen = max(maxlen,currlen);
            if (maxlen==currlen)
                maxst=st;
            currlen=0;
            st=i+1;
        }
        else
        {
            currlen+=1;
        }
        if (a[i]=='\0')
        break;
        i++;
    }
    cout << "Length of largest word = " << maxlen<< endl;
    cout <<"Largest Word = " ;
    for(int i=0;i<maxlen;i++)
    cout << a[maxst+i];

    return 0;
}