#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n: ";
    cin>>n;
    // left wale stars ke liye 
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
           // upper wala beech ka space 
         for(int j = 1; j <= 2*(n - i); j++)
            cout << " ";
            // upper wala right pyramid
            for(int j = 1; j <= i; j++)
            cout << "*";
            cout<<"\n";
    }
    



    // neeche wala left inverted pyramid ke liye 
    for(int i=n;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=2*(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)
        {
            cout<<"*";
        }
        
        cout<<"\n";
    }
}