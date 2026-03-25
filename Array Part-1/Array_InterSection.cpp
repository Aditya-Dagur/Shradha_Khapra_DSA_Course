// Intersection Means that all the Common Elements in 2 Array are Return 

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr1[100], arr2[100];
    int n, m;

    cout << "Enter size of first array: ";
    cin >> n;

    cout << "Enter elements of first array: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    cout << "Enter size of second array: ";
    cin >> m;

    cout << "Enter elements of second array: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    cout << "Intersection elements are: ";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
        {
            if(arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                break;
            }
        }
    }
}