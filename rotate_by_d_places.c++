#include <bits/stdc++.h>
using namespace std;
class rotatebyone
{
public:
    void rotate()
    {
        int n, d;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> d;

        for (int i = 1; i <= d; i++)
        {
            int temp = arr[0];
            /* code */ for (int i = 1; i < n; i++)
            {
                /* code */
                arr[i - 1] = arr[i];
            }
            arr[n - 1] = temp;
        }

        for (int i = 0; i < n; i++)
        {
            /* code */
            cout << arr[i] << " ";
        }
    }
};
int main()
{
    rotatebyone r;
    r.rotate();
}
