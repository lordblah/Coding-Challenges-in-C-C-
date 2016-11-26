#include<iostream>
#include <string>
#include <iomanip>
using namespace std;

struct PayRoll
{
	int empNumber; //employee number
	string name;   //Employee name
	float hours, taxedPay; 
	float payRate, grossPay;	//Hours worked

};
int main()
{
	PayRoll employee; 

	cout <<"Enter the employee's Number: ";
	cin >> employee.empNumber;

	//Get thev employee's name
	cout << "Enter th employee's name: ";
	cin.ignore();
	getline(cin, employee.name);

	//Get the Hours worked by the empolyee
	cout << "How many hours did trhe employee work: ";
	cin >> employee.hours;

	//Get the employee hourly pay rate
	cout << "what is the employee hours payRate: ";
	cin >> employee.payRate;

	employee.grossPay = employee.hours * employee.payRate;
	employee.taxedPay = employee.grossPay - ((employee.grossPay * .0620) + (employee.grossPay * 0.0145) + (employee.grossPay * .0090));
	
	//display the employ data
	cout << "Here is the employee's payroll data: \n";
	cout << "------------------------------------------\n";
	cout << "Name: " << employee.name << endl;
	cout << "Number: " << employee.empNumber << endl;
	cout << "Hoursworked: " << employee.hours << endl;
	cout << "Horly Payrate: " << employee.payRate << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "Gross Pays: $" << employee.grossPay << endl;
	cout << "Taxed Pays: $" << employee.taxedPay << endl;

	return 0;

}