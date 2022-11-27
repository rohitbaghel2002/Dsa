#include <iostream>
using namespace std;
void fibseries(int n)
{
    int a = 0, b = 1;
    int next;

    for (int i = 1; i <= n; i++)
    {
        cout << a << endl;
        next = a + b;
        a = b;
        b = next;
    }
    return;
}
int main()
{
    int n;
    cin >> n;
    fibseries(n);
}