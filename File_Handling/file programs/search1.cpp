#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Student
{
   int rollno;
   string name;
   string branch;
   float marks;
   char grade;
};

// Function prototypes
void getData(Student &st);
void putData(const Student &st);
void searchStudent(int rollNo);

int main()
{
   Student students[3];                  // Array for 3 students
   ofstream fout("marks.txt", ios::app); // Open file in append mode

   if (!fout)
   {
      cout << "Error opening file!" << endl;
      return 1;
   }

   // Taking input for 3 students
   cout << "Enter details for 3 students:\n";
   for (int i = 0; i < 3; i++)
   {
      cout << "\nStudent " << i + 1 << ":\n";
      getData(students[i]);

      // Writing data to file
      fout << students[i].rollno << " " << students[i].name << " "
           << students[i].branch << " " << students[i].marks << " "
           << students[i].grade << endl;
   }
   fout.close();
   cout << "Records added successfully!\n\n";

   // Reading data from file
   ifstream fin("marks.txt");
   if (!fin)
   {
      cout << "Error opening file for reading!" << endl;
      return 1;
   }

   cout << "Student Records from File:\n";
   cout << "Name\tRoll No\tBranch\tMarks\tGrade\n";
   Student temp;
   while (fin >> temp.rollno >> temp.name >> temp.branch >> temp.marks >> temp.grade)
   {
      putData(temp);
   }
   fin.close();

   // Search for a student by roll number
   int rollNoToSearch;
   cout << "\nEnter Roll No to search: ";
   cin >> rollNoToSearch;
   searchStudent(rollNoToSearch);

   return 0;
}

// Function to take student input
void getData(Student &st)
{
   cout << "Enter Roll No: ";
   cin >> st.rollno;
   cin.ignore(); // Clear newline character
   cout << "Enter Name: ";
   getline(cin, st.name); // Allow multi-word names
   cout << "Enter Branch: ";
   cin >> st.branch;
   cout << "Enter Marks: ";
   cin >> st.marks;

   // Assign grade based on marks
   if (st.marks >= 75)
      st.grade = 'A';
   else if (st.marks >= 60)
      st.grade = 'B';
   else if (st.marks >= 50)
      st.grade = 'C';
   else if (st.marks >= 40)
      st.grade = 'D';
   else
      st.grade = 'F';
}

// Function to display student data
void putData(const Student &st)
{
   cout << st.name << "\t" << st.rollno << "\t" << st.branch << "\t"
        << st.marks << "\t" << st.grade << endl;
}

// Function to search for a student by roll number
void searchStudent(int rollNo)
{
   ifstream fin("marks.txt");
   if (!fin)
   {
      cout << "Error opening file for reading!" << endl;
      return;
   }

   Student temp;
   bool found = false;
   while (fin >> temp.rollno >> temp.name >> temp.branch >> temp.marks >> temp.grade)
   {
      if (temp.rollno == rollNo)
      {
         cout << "\nStudent found:\n";
         cout << "Name: " << temp.name << "\nRoll No: " << temp.rollno
              << "\nBranch: " << temp.branch << "\nMarks: " << temp.marks
              << "\nGrade: " << temp.grade << endl;
         found = true;
         break;
      }
   }
   if (!found)
   {
      cout << "\nStudent with Roll No " << rollNo << " not found.\n";
   }

   fin.close();
}
