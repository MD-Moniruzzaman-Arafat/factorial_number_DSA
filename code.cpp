#include <iostream>
using namespace std;

int main()
{
    int n, total = 1;
    cout << "fac of n : ";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        total *= i;
    }
    cout << "total : " << total;

    return 0;
}