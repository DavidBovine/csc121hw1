/*This program calculates the distance traveled by a cloun shot out of a cannon in a
 * vaccume.*/


#include <iostream>
#include <cmath>
using namespace std;

const double g=9.81965;
int main ()
{
	double d=0.0, v=0.0, a=0.0;		// d=distance clown flies
									// v=speed of clown exiting the cannon
									// a=angle of cannon in deg
	
	cout<<"This program calculates the distance a clown flies when shot out of a cannon.\n";
	cout<<"Please enter the angle of the cannon (degrees): ";
	cin>> a;
	cout<<"Please enter the speed of the clown as he is ejected from the cannon (m/s): ";
	cin>> v;
	d= pow(v,2)/g * sin(2*(a*(M_PI/180))); // motion equation for the clown with deg to rad conversion
	
	cout<<"The clown traveled "<<d<<" meters before hitting the ground."<<endl;
	
	return 0;
}