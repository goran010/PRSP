#include <iostream>
using namespace std;

int main()
{
    int t,sx,sy,ex,ey,time=-1;

    string d;
    cin>>t>>sx>>sy>>ex>>ey>>d;

    for(int i=0; i<t; i++)
    {
        if(sx < ex && d[i]=='E')
        {
            sx+=1;
        }
        if(sy > ey && d[i]=='S')
        {
            sy-=1;
        }
        if(sx > ex && d[i]=='W')
        {
            sx-=1;
        }
        if(sy < ey && d[i]=='N')
        {
            sy+=1;
        }

        if (sx == ex && sy == ey)
        {
            time = i + 1;
            break;
        }
    }
    cout << time << endl;
    return 0;
}
