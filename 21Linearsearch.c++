#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Please provide a value for N" << endl;
    cin >> n;
    int array[n];
    cout << "Please provide " << n << " numbers for array" << endl;
    for (int i = 0; i < n; i++)
        cin >> array[i];
    int SearchingNumber;
    cout << "Provide the number you want to search:" << endl;
    cin >> SearchingNumber;
    for (int i = 0; i < n; i++)
    {
        if (array[i] == SearchingNumber)
        {
            cout << "The number " << SearchingNumber << " has been found on index " << array[i];
            break;
        }
    }
    return 0;
}