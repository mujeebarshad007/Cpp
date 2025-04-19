#include <iostream>
#include <fstream>
#define FILE_NAME "emp.dat"

using namespace std;
void readEmployee();
void displayEmployee();
//class employee declaration
struct Employee {

	int 	empID;
	char 	empName[100] ;
	char 	designation[100];
	int 	ddj,mmj,yyj;
	int 	ddb,mmb,yyb;
};
Employee emp;	
	//function to read employee details
	void readEmployee()
	{
		cout<<"EMPLOYEE DETAILS"<<endl;
		cout<<"ENTER EMPLOYEE ID : " ;
		cin>>emp.empID;
		cin.ignore(1);
		cout<<"ENTER  NAME OF THE EMPLOYEE : ";
		cin.getline(emp.empName,100);

		cout<<"ENTER DESIGNATION : ";
		cin.getline(emp.designation,100);
		
		cout<<"ENTER DATE OF JOIN:"<<endl;
		cout<<"DATE : "; cin>>emp.ddj;
		cout<<"MONTH: "; cin>>emp.mmj;
		cout<<"YEAR : "; cin>>emp.yyj;
		
		cout<<"ENTER DATE OF BIRTH:"<<endl;
		cout<<"DATE : "; cin>>emp.ddb;
		cout<<"MONTH: "; cin>>emp.mmb;
		cout<<"YEAR : "; cin>>emp.yyb;
	}
	//function to write employee details
	void displayEmployee()
	{
		cout<<"EMPLOYEE ID: "<<emp.empID<<endl
		 <<"EMPLOYEE NAME: "<<emp.empName<<endl
		 <<"DESIGNATION: "<<emp.designation<<endl
		 <<"DATE OF JOIN: "<<emp.ddj<<"/"<<emp.mmj<<"/"<<emp.yyj<<endl
		 <<"DATE OF BIRTH: "<<emp.ddb<<"/"<<emp.mmb<<"/"<<emp.yyb<<endl;
	}


int main(){
	
	//object of Employee class
	Employee emp;
	//read employee details
	readEmployee();
	
	//write object into the file
	fstream file;
	file.open(FILE_NAME,ios::out|ios::binary);
	if(!file){
		cout<<"Error in creating file...\n";
		return -1;
	}
	
	file.write((char*)&emp,sizeof(emp));
	file.close();
	cout<<"Date saved into file the file.\n";
	
	//open file again 
	file.open(FILE_NAME,ios::in|ios::binary);
	if(!file){
		cout<<"Error in opening file...\n";
		return -1;
	}
	
	if(file.read((char*)&emp,sizeof(emp))){
			cout<<endl<<endl;
			cout<<"Data extracted from file..\n";
			//print the object
			displayEmployee();
	}
	else{
		cout<<"Error in reading data from file...\n";
		return -1;
	}
	
	file.close();	
	return 0;
}

