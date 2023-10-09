
#include "libs.h"
#include <cmath>

/**
* @brief Calc area of triangle
*
* Calculate area of triangle 
* by 3 points A(x,y), B(x,y), C(x,y)
*
* @param points Array with points
*
* @return S - area of triangle
*/
double calc_area_triangle(Point* points) {

	double s;

	// get elements of array
	Point A = points[0];
	Point B = points[1];
	Point C = points[2];
    
	// get area
	s = 1.0 / 2.0*(A.x*(B.y - C.y) +
		B.x*(C.y - A.y) +
		C.x*(A.y - B.y));

	// return with abs
	return abs(s);
};