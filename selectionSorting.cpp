#include <iostream>
using namespace std;

void Selectio(int arr[], int n)
{
    for(int i=0; i<n-1; i++){
        int minIndex= i;
        for(int j=i+1; j<n; j++){
             if(arr[minIndex]>arr[j]){
                minIndex =j;
             }

        }
            swap(arr[minIndex],arr[i]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5] = {4, 5, 6, 1, 2};
    int n = 5;

    Selectio(arr, n);
    return 0;
}