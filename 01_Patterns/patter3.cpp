#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "enter any number \n";

    cin >> n;

    int i = 1;

    while (i <= n)
    {

        int j = 1;

        while (j <= i)
        {
            cout << "*";
            j += 1;
        }

        cout << "\n";
        i += 1;
    }

    return 0;
}