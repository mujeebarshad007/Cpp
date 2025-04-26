#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{
    ifstream st;
    st.open("/home/muhib009/Desktop/Mujeeb");
    ofstream sp;
    sp.open("/home/muhib009/Desktop/Copy");
    if (!st)
    {
        cout << " Error opening file " << endl;
    }
    else
    {
        char ch;
        while (!st.eof())
        {
            st.get(ch);
            sp << ch;
        }
        cout << " The Data Is SuccessFully Copied\n";
        st.close();
        sp.close();
    }
    return 0;
}