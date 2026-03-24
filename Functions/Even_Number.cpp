#include<bits/stdc++.h>
using namespace std;
bool IsEven(int n)
{
    if(n%2==0)
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cout<<"Enter Any Number: ";
    cin>>n;
    if(IsEven(n))
    {
        cout<<n<<" is an Even Number";
    }
    else
    {
      cout<<n<<" is not an Even Number";  
    }
}