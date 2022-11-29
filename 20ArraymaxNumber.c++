#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cout << "Please provide a value for N" << endl;
    cin >> n;
    int array[n];
    cout << "Please Enter" << n << " numbers:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> array[i];
    }
    int Max = INT_MIN;
    int Min = INT_MAX;
    for (int i = 1; i <= n; i++)
    {
        Max = max(Max, array[i]);
        Min = min(Min, array[i]);
    }
    cout << "The Maximum number is " << Max << " and the minimum number is " << Min;
    return 0;
}