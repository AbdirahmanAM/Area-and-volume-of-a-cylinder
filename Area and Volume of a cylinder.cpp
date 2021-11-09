// Area and Volume of a cylinder.cpp : This file contains the 'main' function. Program execution begins and ends there.

//CAT 1
//Abdirahman Gedi
//Student number 137748

#include <iostream>
using namespace std;

int main()
{
	//initializing variables
	double radius, height, area, volume;

	//declaring Constant Pie
	const float pie = 3.141592;

	//AREA OF THE CYLINDER
	cout << "...Calculate the area of a cylinder..." << endl;
	cout << "\n";
	//collecting user input
	cout << "Enter the radius of the cylinder: ";
	cin >> radius;
	cout << "\n";
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	cout << "\n";
	//Executing the area
	area = (2 * pie * radius * height) + (2 * pie * radius * radius);
	cout << "The area of the cylinder is: " << area << endl;

	cout << "\n";
	cout << ".....................................................\n";

	//VOLUME OF THE CYLINDER
	cout << "...Calculate the volume of a cylinder..." << endl;
	cout << "\n";
	//collecting user input
	cout << "Enter the radius of the cylinder: ";
	cin >> radius;
	cout << "\n";
	cout << "Enter the height of the cylinder: ";
	cin >> height;
	cout << "\n";
	//executing the volume
	volume = pie * radius * radius * height;
	cout << "The volume of the Cylinder is: " << volume << endl;

	return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
