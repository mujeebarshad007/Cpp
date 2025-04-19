// C++ program to Read a record from a File
// using seekg() and tellg()
#include <iostream>
#include <fstream>
#include <stdio.h>
using namespace std;

class student {
	int id;
	char Name[20];

public:
	void display(int K);
};

void student::display(int K)
{
	fstream fs;
	fs.open("student.dat", ios::in | ios::binary);

	// using seekg(pos) method  to place pointer at 7th record
	fs.seekg(K * sizeof(student));

	// reading Kth record
	fs.read((char*)this, sizeof(student));

	// using tellg() to display current position
	cout << "Current Position: "
		<< "student no: "
		<< fs.tellg() / sizeof(student) + 1;

	// using seekg()place pointer at end of file
	fs.seekg(0, ios::end);

	cout << " of "
		<< fs.tellg() / sizeof(student)
		<< endl;
	fs.close();
}

// Driver code
int main()
{

	// Record number of the student to be read
	int K = 7;

	student s;
	s.display(K);

	return 0;
}

