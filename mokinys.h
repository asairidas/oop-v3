#ifndef mokinys_h
#define mokinys_h

#include <string>
#include <vector>

using namespace std;

struct Mokinys
{
    string vardas;
    string pavarde;
    vector<int> namu_darbu_rezultatai;
    int egzamino_rezultatas{0};
    double galutinis{0};
};

#endif