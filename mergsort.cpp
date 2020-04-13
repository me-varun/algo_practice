#include <iostream>
using namespace std;

void merge(int *a, int s, int e)
{

    int temp[100];
    int mid = (s + e) / 2;
    int i = s;
    int j = mid + 1, k = s;

    while (i <= mid && j <= e)
    {
        if (a[i] < a[j])
        {
            temp[k++] = a[i++];
        }
        else
        {
            temp[k++] = a[j++];
        }}
        while (j <= e)
        {
            temp[k++] = a[j++];
        }
             
        while (i <= mid)
        {
            temp[k++] = a[i++];
        }
    //    cout<<"("<<s<<','<<e<<")"<<endl;
        for (i = s; i <= e; i++)
        {
            // cout<<temp[i]<<" , ";
            a[i] = temp[i];
        }

    }


void mergesort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    // for(int i =s ; i<e ; i++){
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    int mid = (s + e) / 2;
    mergesort(arr, s, mid);
    mergesort(arr, mid + 1, e);
    merge(arr, s, e);
}

int main()
{
    int arr[] = {6,5,8,1,2,4,0};
    int n = sizeof(arr) / sizeof(int);
    mergesort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;

    return 0;
}