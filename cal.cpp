#include <iostream>
using namespace std;

int main()
{   cout<<"first mitex";
    int n,m,ans;
    cin>>n>>m;
    int arr[n][m];

    for(int i=0; i<n;i++){
        for(int j=0; j<m;j++){
            cin>>arr[i][j];
        }
    }
    int o;
    cin>>o;
    int ar[m][o];

    for(int i=0; i<m;i++){
        for(int j=0;j<o;j++){
            cin>>ar[m][o];
        }
    }

    for(int i=0; i<n;i++){
        for(int j=0; j<o; j++){
             ans[i][j]=0;
        }
    }


    return 0;
}