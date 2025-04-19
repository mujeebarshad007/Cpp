#include<iostream>
#include<fstream>
using namespace std;
struct Student {
   int roll_no;
   string name;
};
int main() 
{
   ofstream wf("d:\\stu.dat", ios::out | ios::binary);
   if(!wf) 
   {
      cout << "Cannot open file!" << endl;
      return 1;
   }
   Student wstu[3];
   
   wstu[0].roll_no = 1;
   wstu[0].name = "nouman ali";
   wstu[1].roll_no = 2;
   wstu[1].name = "ali khan";
   wstu[2].roll_no = 3;
   wstu[2].name = "qasim jan";
   
   for(int i = 0; i < 3; i++)
      wf.write((char *) &wstu[i], sizeof(Student));
   wf.close();
   
   if(!wf.good()) 
   {
      cout << "Error occurred at writing time!" << endl;
      return 1;
   }
   
   ifstream rf("d:\\stu.dat", ios::in | ios::binary);
   if(!rf) {
      cout << "Cannot open file!" << endl;
      return 1;
   }
   Student rstu[3];
   for(int i = 0; i < 3; i++)
      rf.read((char *) &rstu[i], sizeof(Student));
   rf.close();
   if(!rf.good()) {
  cout << "Error occurred at reading time!" << endl;
      return 1;
    }
   cout<<"Student's Details:"<<endl;
   for(int i=0; i < 3; i++) {
      cout << "Roll No: " << wstu[i].roll_no << endl;
      cout << "Name: " << wstu[i].name << endl;
      cout << endl;
   }
   return 0;
}
