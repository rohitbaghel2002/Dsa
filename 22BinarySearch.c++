#include <iostream>
using namespace std;
int binarySearch(int n, int element, int array[])
{
    int s = 0;
    int e = n;
    while (s <= n)
    {
        int mid = (s + e) / 2;
        if (array[mid] == element)
        {
            return mid;
        }
        else if (array[mid] > element)
        {
            e = mid - 1;
        }
        else
            s = mid + 1;
    }
    return -1;
}
int main()
{
    int n;
    cout << "Please provide a value for N" << endl;
    cin >> n;

    int array[n];
    cout << "please provide the " << n << " numbers for array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int element;
    cout << "please provide the element to be searched" << endl;
    cin >> element;
    cout << binarySearch(n, element, array);
    return 0;
}