#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    string niz;
    vector<int> lista;

    getline(cin, niz);

    stringstream ss(niz);
    int broj;


    while (ss >> broj)
    {
        lista.push_back(broj);
    }


    int score = lista[0];
    int localscore = lista[0];

    for (size_t i = 1; i < lista.size(); ++i)
    {
        localscore = std::max(lista[i], localscore + lista[i]);
        score = std::max(score, localscore);
    }

    cout <<score<< endl;
    return 0;
}

