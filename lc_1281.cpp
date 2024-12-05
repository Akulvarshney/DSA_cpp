#include <iostream>
using namespace std;

int main()
{

    int n;

    cin >> n;

    int sum = 0;
    int prod = 1;

    for (int i = 0; n > 0; i++)
    {

        int digit;
        digit = n % 10;
        prod = prod * digit;
        sum = sum + digit;

        n = n / 10;
    }

    int result = prod - sum;
    cout << result;

    return 0;
}