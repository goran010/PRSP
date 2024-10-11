#include <iostream>

using namespace std;

int main()
{
    int weight;
    cin>>weight;

    for(int i=1;i<weight+1;i++)
    {
        int a,b;
        a=i;
        b=weight-i;
        if(a%2==0 && b%2==0 && b>0 && a>0 )
        {
            cout << "Yes" << endl;
            break;
        }
        else if(a==weight)
        {
             cout << "No" << endl;
        }
    }
    return 0;
}
