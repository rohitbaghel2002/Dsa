#include <bits/stdc++.h>
using namespace std;
void f(int n, int i)
{
    if (n < i)
        return;
    else
        f(n, i + 1);
    cout << i << endl;
}
int main()
{
    int n;
    cin >> n;
    f(n, 1);
}