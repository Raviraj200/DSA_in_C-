#include <iostream>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    char button;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout << "hello a";
        break;
    case 'b':
        cout << "hello b";
        break;
    default:
        break;
    }

    return 0;
}