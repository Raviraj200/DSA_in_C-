#include <iostream>
using namespace std;
int ans(int arr[], int n)
{
    for(int i=0;i<n; i++){
        cin>>arr[i];
    }
for(int i=0;i<n; i++){
        cout<<arr[i];
    }
for(int i=0; i<=n; i++){
    for(int j=i; j<=n; j++){
        cout<<arr[j]<<" ";
    }
    cout<<endl;
}
}
int main()
{
    int n;
    cin >> n;
    int arr[n];

    ans(arr, n);

    return 0;
}