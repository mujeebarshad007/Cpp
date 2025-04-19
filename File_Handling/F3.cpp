
#include <iostream>
#include<conio.h>
#include <fstream>
// read data from the file and and display data on the monitor

//    Syntax of getline function
//istream& getline (istream& is, string& str);
// parameter is means istream object from which characters are extracted.
// parameter str means string object where the extracted line is stored.

using namespace std;

int main()
{
    fstream st; 
			string line;				// step 1: Creating object of fstream class
    st.open("d:\\OOP1.TXT",ios::in);   	// Step 2: opens a file for Creating new file
    if(!st) 							// Step 3: Checking whether file exist
    {
        cout<<"No such file";
    }
    else
    {
        
    
	    while (!st.eof())				//read the contents of a file until eof (end of file reached)
        {
		    							//st >>line;  // Step 4: Reading from file
		    
			getline(st, line);			//istream& getline (istream& is, string& str);
			cout <<line;				// parameter is means istream object from which characters are extracted.
			cout<<endl;					// parameter str means string object where the extracted line is stored.
        }
        st.close(); // Step 5: Closing file
    }
    getch();
    return 0;
}
