#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{

    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[i + 1])
            {
                swap(arr[j], arr[i + 1]);
            }
        }
    }
}
int main()
{
    int arr[5] = {1, 2, 3, 8, 4};
    bubbleSort(arr, 5);

    return 0;
}