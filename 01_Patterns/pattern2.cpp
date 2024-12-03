#include <iostream>
using namespace std;

int main()
{

    int n;

    cout << "enter any number \n";

    cin >> n;

    int i = n;
    // 5

    while (i >= 0)
    {

        int j = i;
        // j=5

        while (j >= 0)
        {
            cout << "*";
            j -= 1;
        }

        cout << "\n";
        i -= 1;
    }

    return 0;
}