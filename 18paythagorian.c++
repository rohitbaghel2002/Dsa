#include <iostream>
using namespace std;
int paythagorian()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == b * b + a * a)

        cout << "the given number is a Paythagorian tiplate";

    else
        cout << "the given number is not a Paythagorian triplate";
}
int main()
{
    paythagorian();
}