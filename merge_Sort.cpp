#include <iostream>
using namespace std;
void merge(int arr[], int low, int mid, int high)
{
    int n1 = mid - low + 1;
    int n2 = high - mid;

    int a[n1];
    int b[n2];
    for (int i = 0; i <= n1; i++)
    {
        a[i] = arr[low + 1];
    }
    for (int i = 0; i <=n2; i++)
    {
        b[i] = arr[mid + 1 + i];
    }
    int i = 0, j = 0, k = low;

    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++, i++;
        }
        else
        {
            arr[k] = a[j];
            k++, j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++, i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        j++, k++;
    }
}
void mergeSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int mid = (low + high) / 2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid + 1, high);

        merge(arr, low, mid, high);
    }
}
int main()
{
    int arr[] = {1, 3, 5, 6, 47, 98, 7, 4};
    mergeSort(arr, 0, 8);
    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}