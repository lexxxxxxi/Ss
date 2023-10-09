// Calc_area_triangle.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <string>
#include "libs.h"

using namespace std;

/**
* @brief Entry point
*
* Execution of the program
* starts here.
*
* @return Program exit status
*/
int main()
{
	// create array for Point
	Point points[3];

	const char* points_char[3]
		= { "A", "B", "C"};

	bool in_loop = true;
	while (in_loop) {
		// read x,y from console input
		for (int i = 0; i < 3; i++) {
			cout << "Enter point " << points_char[i] <<" coordinates: "<< endl;
			cout << points_char[i] << " [x] coordinate (float): ";
			cin >> points[i].x;
			cout << points_char[i] << " [y] coordinate (float): ";
			cin >> points[i].y;
		}

		// print entered points
		cout << endl; // print empty row
		cout << "You have entered the following points:" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "Point " << points_char[i] << ": (" << points[i].x << ", " << points[i].y << ")" << endl;
		}

		cout << endl; // print empty row
		cout << "Calculate area of triangle?" << endl;
		cout << "Enter (y or 1) for calculate" << endl;
		cout << "Enter (n or 0) for exit" << endl;
		cout << "Enter any other key or (r) for repeat input points coordinates " << endl;
		cout << endl; // print empty row
		cout << "Enter your choice: ";

		string answer;
		cin >> answer;

		if ("y" == answer || "1" == answer) {
			cout << endl; // print empty row
			cout << "Start calculating area" << endl;
			double s = calc_area_triangle(points);
			cout << "Area of triangle: " << s << endl;

			cout << endl; // print empty row
			cout << "Enter (n or 0) for exit: ";
			
			cin >> answer;
			if ("n" == answer || "0" == answer) {
				cout << "Exit" << endl;
				in_loop = false;
			}
			cout << endl; // print empty row

		 } else if ("n" == answer || "0" == answer) {
			cout << "Exit" << endl;
			in_loop = false;
		}
		 else
			cout << "Go Repeat" << endl;

	}

	return 0;
}

