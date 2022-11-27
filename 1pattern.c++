#include <iostream>
using namespace std;
int main()
{
    int n, j, i;
    cout << "enter the number";
    cin >> n;
    for (i = 0; i <= n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout<<endl;
    }
}