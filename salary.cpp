#include<iostream>
#include<string.h>

using namespace std;

class Employee()
{
	string empName;
	int empNo ;
	string address;
	int baseSalary
	int daysEntered;
	string designation;
	void addEmployee();
	void deleteEmloyee();
	void modify employee();
}



int main()
{
	int choice;
	do{
		cout<<"***********MENU***********\n";
		cout<<"1. Administrator\n";
		cout<<"2. Entry\n";
		cout<<"3. Exit\n";
		cout<<"4. Details\n";
		cout<<"5. Exit\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
			{
//				adminMenu();
				break;
			}
			case 2:
			{
//				empEntry();
				break;
			}
			case 3:
			{
//				empExit();
				break;
			}
			case 4:
			{
//				details();
				break;
			}
		}
	}while(choice!=5);


	cout<<"Exiting........\n\n";
	return 0;
}
	
