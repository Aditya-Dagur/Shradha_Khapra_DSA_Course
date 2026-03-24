#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
int main()
{
    int first, second,count=0;
    cout << "Enter First Number: ";
    cin >> first;
    cout << "Enter Second Number: ";
    cin >> second;
    cout << "Prime numbers between " << first << " and " << second << " are:\n";
    for (int i = first; i <= second; i++)
    {
        if (isPrime(i))
        {
            cout << i << " ";
            count+=1;
        }
    }
    cout<<"\n Total Prime Number Between "<< first << " and " << second << " are: "<<count;
}