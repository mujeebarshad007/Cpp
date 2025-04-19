#include <iostream>
#include <fstream>

using namespace std;

const int n = 3; // Number of students

struct student
{
    int age;
    string name;
    int rollno;
};

// Function prototypes
void getData(student &stu);
void putData(student stu);
void searchfun(int rollNo);

int main()
{
    student stu[n];

    // Open file for writing (overwrite previous data)
    ofstream stus("/home/niko007/Desktop/task.txt", ios::trunc);
    if (!stus)
    {
        cout << "File Not Opened for writing" << endl;
        return 1; // Exit program
    }

    cout << "Enter details for " << n << " students:\n";
    for (int i = 0; i < n; i++)
    {
        cout << "Student " << i + 1 << ":\n";
        getData(stu[i]);
        stus << stu[i].rollno << " " << stu[i].name << " " << stu[i].age << endl;
    }
    stus.close();
    cout << "Records added successfully!\n\n";

    // Open file for reading and display records
    ifstream stur("/home/niko007/Desktop/task.txt");
    if (!stur)
    {
        cout << "File Not Opened for reading" << endl;
        return 1;
    }

    student temp;
    cout << "Student Records from File:\n";
    cout << "Roll No\tName\tAge\n";

    bool dataAvailable = false;
    while (stur >> temp.rollno >> temp.name >> temp.age)
    {
        putData(temp);
        dataAvailable = true;
    }
    stur.close();

    if (!dataAvailable)
    {
        cout << "No records found in the file!" << endl;
        return 1;
    }

    // Search for a student by roll number
    int roll;
    cout << "\nEnter the roll no to search: ";
    cin >> roll;
    searchfun(roll);

    return 0;
}

// Function to get student data from user
void getData(student &stu)
{
    cout << "Enter Roll No: ";
    cin >> stu.rollno;
    cin.ignore(); // Ignore newline left in the buffer

    cout << "Enter Name: ";
    getline(cin, stu.name); // Allow multi-word names

    cout << "Enter Age: ";
    cin >> stu.age;
}

// Function to display student data
void putData(student stu)
{
    cout << stu.rollno << "\t" << stu.name << "\t" << stu.age << endl;
}

// Function to search for a student in the file
void searchfun(int rollNo)
{
    ifstream stur("/home/niko007/Desktop/task.txt");
    if (!stur)
    {
        cout << "Error opening file for searching!" << endl;
        return;
    }

    student temp;
    bool found = false;

    while (stur >> temp.rollno >> temp.name >> temp.age)
    {
        if (temp.rollno == rollNo)
        {
            cout << "\nStudent found:\n";
            cout << "Name: " << temp.name << "\nRoll No: " << temp.rollno
                 << "\nAge: " << temp.age << endl;
            found = true;
            break;
        }
    }

    if (!found)
    {
        cout << "\nStudent with Roll No " << rollNo << " not found.\n";
    }

    stur.close();
}
