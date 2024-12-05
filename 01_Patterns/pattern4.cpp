#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "Enter any number \n";
    cin >> n;

    int num = 1;

    int i = 1;

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << num;
            num += 1;
            j += 1;
        }
        cout << "\n";
        i += 1;
    }

    return 0;
}