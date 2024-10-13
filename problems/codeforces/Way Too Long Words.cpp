#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string senc;

    while (n--)
    {
        cin >> senc;
        if (senc.length() > 10)
        {
            cout << senc[0] << senc.length() - 2 << senc[senc.length() - 1] << endl;
        }
        else
        {
            cout << senc << endl;
        }
    }
    return 0;
}
