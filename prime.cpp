#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "enter any number";

    cin >> n;

    bool isPrime = 0;

    for (int i = 2; i <= (n + 1) / 2; i++)
    {

        cout << i << " ";

        if (n % i == 0)
        {
            isPrime = 1;
            break;
        }
    };

    if (isPrime)
    {
        cout << n << " is a not prime number";
    }
    else
    {
        cout << n << " is a prime number";
    }

    return 0;
}