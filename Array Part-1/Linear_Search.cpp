// Find the Element in the Array if Exist Return true and index of the element
#include <bits/stdc++.h>
using namespace std;
int Is_Present(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[100], n, key, i;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << "Enter Array Elements: ";
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the Key You Want to Search: ";
    cin >> key;
    int ans=Is_Present(arr,n,key);
    if(ans!=-1)
    {

        cout << key << " Is Present in the Array at Index: " << ans;
    }
    else
    {
        cout << key << " Is not Present in the Array";
    }
}