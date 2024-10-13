#include <iostream>
using namespace std;

int main()
{
    string word;
    int score=0,localscore=1;

    getline(cin,word);

    for(int i=0; i<word.length(); i++)
    {
        localscore=1;
        for(int j=i+1; i<word.length(); j++)
        {
            if(word[i]==word[j])
            {
                localscore++;
                i=j;
            }
            else{
                break;
            }
        }
        if(localscore>score)
        {
            score=localscore;
        }
    }
    cout<<score;
    return 0;
}
