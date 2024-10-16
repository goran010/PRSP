#include <iostream>

using namespace std;

int main()
{
    string s,word="hello";
    int position=0;
    getline(cin,s);
    int score=0;


    for(int i=0; i<5; i++)
    {
        for(int j=position; j<s.length(); j++)
        {
            if(s[j]==word[i])
            {
                position=j+1;
                score+=1;
                break;
            }
        }
    }


    score==5?cout<<"YES"
                 :
                 cout<<"NO";
    return 0;
}

