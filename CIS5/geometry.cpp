#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//constrant for p.i
const double PI = 3.14159;

//structure declaration
struct Circle
{
	double radius, diameter, area; //Circle radius,diameter, area
};

int main()
{
	//variable decleration
	Circle c;

	//Get the circle diameter.
	cout << "Enter the Circle diameter: ";
	cin >> c.diameter;

	//Calculate the circle radius
	c.radius = c.diameter / 2;

	//Calculate the circle aera
	c.area = PI * pow(c.radius, 2.0);

	//Display the circle data
	cout << fixed << showpoint << setprecision(2);
	cout << "The radius and area of the circle are: \n";
	cout << "Radius: " << c.radius << endl;
	cout << "Area: " << c.area << endl;
	return 0;
}