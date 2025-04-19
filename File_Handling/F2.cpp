
/*
Syntax for file creation: FilePointer.open("Path",ios::mode);

Example of file opened for writing: st.open("E:\studytonight.txt",ios::out);
Example of file opened for reading: st.open("E:\studytonight.txt",ios::in);
Example of file opened for appending: st.open("E:\studytonight.txt",ios::app);
Example of file opened for truncating: st.open("E:\studytonight.txt",ios::trunc);
*/ 

//writing data to files

#include <iostream>
#include<conio.h>
#include <fstream>

using namespace std;

int main()
{
    fstream st; 							// Step 1: Creating object of fstream class
    st.open("D:\\OOP1.txt",ios::out);  		// Step 2: opens a file (Creating new file)
    if(!st) 								// Step 3: Checking whether file exist
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created\n";
        
		st<<"Hello PAKISTAN\n";    			// Step 4: Writing some data to file
		st<<"Pakistan Zinda Bad\n";
		st<<"its a fun\n";
		
		cout<<"data written to file ";
        st.close(); 						// Step 5: Closing file
    }
    //getch();
    return 0;
}
