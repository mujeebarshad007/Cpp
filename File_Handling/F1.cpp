
/*
Syntax for file creation: FilePointer.open("Path",ios::mode);

Example of file opened for writing: 	st.open("E:\studytonight.txt",ios::out);
Example of file opened for reading: 	st.open("E:\studytonight.txt",ios::in);
Example of file opened for appending: 	st.open("E:\studytonight.txt",ios::app);
Example of file opened for truncating: 	st.open("E:\studytonight.txt",ios::trunc);

ios::trunc  =>If the file already exists, its contents will be truncated before opening the file.
*/ 
#include<iostream>
#include<conio.h>
#include <fstream>

using namespace std;

int main()
{	// CREATS A NEW FILE (But at the moment no data written to file)
    
	fstream st; 							// Step 1: Creating object of fstream class
    st.open("D:\\OOP1.TXT",ios::out);  		// Step 2: opens a file (Creating new file)
    										// logical fileName=st , Physical fileName=OOP1.TXT
    if(!st) 								// Step 3: Checking whether file exist
    {
        cout<<"File creation failed";
    }
    else
    {
        cout<<"New file created";
        
    }
    
    st.close(); // Step 4: Closing file
    
    return 0;
}
