#include <iostream>
using namespace std;

int main()
{

    int n;
    cout << "Enter any number";
    cin >> n;

    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i = 0; i <= n; i++)
    {
        int nextNum;

        nextNum = a + b;

        cout << nextNum << " ";

        a = b;
        b = nextNum;
    }

    return 0;
}