
#include <iostream>
using namespace std;

int  binarySearchh(int arr[], int n, int find)
{
    int l=0,r=n,min;
    while (l<=r)
    {
      min=(l+r)/2;

      if(arr[min]==find){
       int a= min+1;
       return a;
        break;
      }
      else if (arr[min]>find)
      {
        r=min-1;

      }
      else if (arr[min]<find)
      {
        l=min+1;
      }

      
      
    }
    if(l>r){
        cout<<"NUmber is not found"<<endl;
    }
    
}
int main()
{
    int arr[10] = {2, 4, 5, 6, 7, 8, 9, 11, 22, 33};
    int find, n = 10;
    cout << "enter a find number"
         << " ";
    cin >> find;
    cout<<binarySearchh(arr, n, find);

    return 0;
}