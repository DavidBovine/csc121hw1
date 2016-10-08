/* This program will calculate the gravity of a given planet of mass (m) and radius (r) */


#include <iostream>
#include <cmath>
using namespace std;

const double G=6.67408e-11;	// universal gravitational constant uses kg, m, sec for units
int main()
{
	double g=0.0;		// define local gravity g
	double m=0.0;		// define varible mass in kg
	double r=0.0;		// define varibable radius in meters
	cout<< "This program calculates the gravity of a given planet. \n";
	cout<< "Please enter the mass of the planet in kg. \n(acepted format 5.972e24): ";
	cin>>m;
	cout<< "Please enter the radius of the planet in km:";
	cin>>r;
	g=(m/pow((1000*r),2.0))*G;	// formula for gravity 1000*r is to conver km to meters
	cout<< "Local gravity is "<< g <<"m/s^2"<<endl;
	return 0;
}
