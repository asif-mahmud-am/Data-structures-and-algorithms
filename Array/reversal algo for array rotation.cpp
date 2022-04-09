#include<bits/stdc++.h>
using namespace std;

void reverse_algo(int arr[], int start, int end)
{
    while(start<end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }

}

void left_rotation(int arr[], int d, int n)
{
    if(d==0)
        return;
    d = d % n;

    reverse_algo(arr, 0, d-1);
    reverse_algo(arr, d, n-1);
    reverse_algo(arr, 0, n-1);

}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7};
    int d = 2;
    int n = sizeof(arr) / sizeof(arr[0]);
    left_rotation(arr,d,n);
    printArray(arr,n);

    return 0;
}
