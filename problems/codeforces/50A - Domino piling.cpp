#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int m,n,score=0;
    cin>>m>>n;

    if(m%2==0)
    {
        score=m/2*n;
    }
    else if(n%2==0)
    {
        score=n/2*m;
    }
    else if(n%2==1 && m%2==1 && n<m || n==m)
    {

        score=(n-1)/2*m+m/2;
    }
    else if(n%2==1 && m%2==1 && m<n)
    {

        score=(m-1)/2*n+n/2;
    }

    cout<<score;
    return 0;
}

