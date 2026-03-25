#include<bits/stdc++.h>
using namespace std;
int Largest_Elem(int arr[],int n)
{
    int Max_Elem=INT16_MIN;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>Max_Elem)
        {
         Max_Elem=arr[i];   
        }
    }
    return Max_Elem;
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
    cout<<"Largest Element of Array is: "<<Largest_Elem(arr,n);
}