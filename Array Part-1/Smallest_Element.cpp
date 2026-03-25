#include<bits/stdc++.h>
using namespace std;
int smallest_Elem(int arr[],int n)
{
    int min=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}
int main()
{
    int arr[100],n;
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter Array Elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Smallest Element in the Given Array is: "<<smallest_Elem(arr,n);
}