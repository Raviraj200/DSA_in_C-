#include <iostream>
using namespace std;

int selection_sort(int arr[], int n)
{int a;
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
              a= (arr[minIndex], arr[i]);
            
        }
    }
    return a;
}

int main()
{
    int arr[5] = {1, 2, 3, 8, 4};
    cout<<selection_sort(arr, 5);
    // cout << a << " ";
    return 0;
}