// Remove all the duplicate Values and return the unique Value 
#include<bits/stdc++.h>
using namespace std;
int Unique_Elem(int arr[],int n)
{
    int ans=0;
    for(int i=0;i<n;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int arr[100], n;
    cout << "Enter the size: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout<<"Unique Element in the array after Removing all Duplicates is: "<<Unique_Elem(arr,n);
}