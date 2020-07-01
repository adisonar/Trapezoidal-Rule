/*Program to compute numerical integration
 x0 = lower limit, xn = upper limit, h = grid size, n = number of strips
*/

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<iostream>
using namespace std;

#define f(x) sin(x)   //function

int main()
{
	double x0, xn, ans = 0.0, ans1, h, TrapezoidalRule;
	int i, n;

	cout << "Enter the lower limit of integration: ";
	cin >> x0;
	cout << "Enter the upper limit of integration: ";
	cin >> xn;
	cout << "Enter the number of strips: ";
	cin >> n;

	x0 = x0 * (3.14 / 180.0); //conversion from degrees to radians
	xn = xn * (3.14 / 180.0);	//conversion from degrees to radians

	h = (xn - x0)/n;

	for (i = 1; i <= n - 1; i++){
		ans = ans + (f(x0 + i*h));
	}
	ans = 2.0 * ans;
	ans1 = f(x0) + f(xn);
	TrapezoidalRule =  (ans+ans1)*(h/2.0);

	cout << endl << "The value of the integral using trapezoidal rule is: " << TrapezoidalRule;

	return 0;
}
