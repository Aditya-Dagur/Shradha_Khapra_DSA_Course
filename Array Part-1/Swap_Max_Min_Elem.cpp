#include<bits/stdc++.h>
using namespace std;

void Swap_Elem(int arr[], int n)
{
    int maxIndex = 0, minIndex = 0;

    for(int i = 1; i < n; i++)
    {
        if(arr[i] > arr[maxIndex])
        {
            maxIndex = i;
        }

        if(arr[i] < arr[minIndex])
        {
            minIndex = i;
        }
    }

    swap(arr[maxIndex], arr[minIndex]);
}

void Print_Array(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[100], n;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    Swap_Elem(arr, n);

    cout << "Array after swapping max and min: ";
    Print_Array(arr, n);
}