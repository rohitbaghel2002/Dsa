#include <bits/stdc++.h>
using namespace std;
class rotatebyone
{
public:
    void rotate()
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = arr[0];
        for (int i = 1; i < n; i++)
        {
            /* code */
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = temp;
        for (int i = 0; i < n; i++)
        {
            /* code */
            cout << arr[i];
        }
    }
};
int main()
{
    rotatebyone r;
    r.rotate();
}
