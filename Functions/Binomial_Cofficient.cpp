#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact*=i;
    }
    return fact;
}
int nCr_func(int n,int r)
{
    int ans=factorial(n)/(factorial(r)*factorial(n-r));
    return ans;
}
int main()
{
cout<<"Binomial Coffiecient= "<<nCr_func(8,2);
}