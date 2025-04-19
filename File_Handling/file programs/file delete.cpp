// C++ program to delete the record
// of a binary file

#include <bits/stdc++.h>

using namespace std;

class abc {
	int roll;
	char name[20];

public:
	void deleteit(int);
	void testcase1();
	void testcase2();
	void putdata();
};

// Code to display the data of the
// data of the object
void abc::putdata()
{
	cout << "roll no: ";
	cout << roll;
	cout << "\nname: ";
	cout << name;
}

// code to delete
// the content of the binary file
void abc::deleteit(int rno)
{

	int pos, flag = 0;

	ifstream ifs;
	ifs.open("he.dat", ios::in | ios::binary);

	ofstream ofs;
	ofs.open("temp.dat", ios::out | ios::binary);

	while (!ifs.eof()) {

		ifs.read((char*)this, sizeof(abc));

		// if(ifs)checks the buffer record in the file
		if (ifs) {

			// comparing the roll no with
			// roll no of record to be deleted
			if (rno == roll) {
				flag = 1;
				cout << "The deleted record is \n";

				// display the record
				putdata();
			}
			else {
				// copy the record of "he" file to "temp" file
				ofs.write((char*)this, sizeof(abc));
			}
		}
	}

	ofs.close();
	ifs.close();

	// delete the old file
	remove("he.dat");

	// rename new file to the older file
	rename("temp.dat", "he.dat");

	if (flag == 1)
		cout << "\nrecord successfully deleted \n";
	else
		cout << "\nrecord not found \n";
}

// Sample input 1
void abc::testcase1()
{
	int rno;

	// roll no to be searched
	rno = 1;

	// call deleteit function
	// with the roll no. of record to be deleted
	deleteit(rno);
}

// Sample input 2
void abc::testcase2()
{
	int rno;

	// roll no to be searched
	rno = 4;

	// call deleteit function
	// with the roll no of record to be deleted
	deleteit(rno);
}

// Driver code
int main()
{
	abc s;

	// sample case 1
	s.testcase1();

	// sample case 2

	s.testcase2();

	return 0;
}

