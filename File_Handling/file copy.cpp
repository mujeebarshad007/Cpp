#include <iostream>
#include <fstream>
#include <conio.h>

#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
	string line;
	// For writing text file
	// Creating object of ofstream & ifstream class
	ifstream in_file;
	ofstream out_file;

	in_file.open("d:\\abc.txt"); // opens file in reading mode
	if (!in_file)
	{
		cout << "Error in opening source file..!!";
		getch();
		exit(1);
	}

	out_file.open("d:\\xyz.txt"); // opens file in writing mode
	if (!out_file)
	{
		cout << "Error in opening target file..!!";
		out_file.close();
		getch();
		exit(1);
	}

	if (in_file && out_file) // if both files opens successfully
	{

		while (getline(in_file, line)) // reading data from in_file  and
		{
			out_file << line << "\n"; // writing data to out_file
			cout << line << endl;	  // displaying data on the monitor
		}

		cout << "Copy Finished \n";
	}
	else
	{
		// Something went wrong
		cout << "Cannot read File";
	}

	in_file.close();  // Closing in_file
	out_file.close(); ////Closing out_file

	return 0;
}
