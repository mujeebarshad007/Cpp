// Baisc C++ Structure Code

#include <iostream>
using namespace std;
struct niko
{
    int nid;
    char nstring;
    float nperc;
};
int main()
{
    struct niko mujeeb;
    mujeeb.nid = 89;
    mujeeb.nstring = 'c';
    mujeeb.nperc = 78.98;
    cout << "The Value of Niko's id is " << mujeeb.nperc << endl;
    cout << "The Value of Niko's character " << mujeeb.nstring << endl;
    cout << "The Value of Niko's  perc " << mujeeb.nid << endl;

    return 0;
}