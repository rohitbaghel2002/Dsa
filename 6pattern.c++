#include <iostream>
using namespace std;
int main()
{
    int n, j, i;
    int counter = 1;
    cin >> n;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= i; j++)
        {
            cout << counter << " ";
            counter++;
        }
        cout << endl;
    }
}