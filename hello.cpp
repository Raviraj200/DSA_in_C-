#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int a, b;
    cin >> a >> b;
    int i;
    for (i = a; i <= b; i++)
    {
        int j;
        for (j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
        }
          if (i == j)
    {
        cout << j<<endl;
    }
    }
  
    return 0;
}