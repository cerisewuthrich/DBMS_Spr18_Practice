/* The purpose of this project is to
   provide an opportunity to practice
   using GitHub.
   It starts with a simple Fraction
   class.  Users will contribute
   to the implementation of the Fraction
   class along with the driver code.
   */


#include<iostream>
#include"Fraction4123.h"
using namespace std;

int main() {
	//12.  Instantiate 4 fractions named f1, f2, f3, f4 using the parameterized constructor
	Fraction4123 f1(1,2), f2(1,3), f3(1,4), f4(1,5);
	//13.  Instantiate 4 fractions named sum, difference, product, quotient using the parameterized constructor
	Fraction4123 sum(2, 2), difference(2, 3), product(2, 4), quotient(2, 5);
	//14.  Find the sum of f1 and f2 and cout the result.
	sum = f1.add(f2);
	cout << f1 << " + " << f2 << " = " << sum << '\n';
	//15.  Find the difference of f2 and f3 and cout the result.
	difference = f2.subtract(f3);
	cout << f2 << " - " << f3 << " = " << difference << '\n';
	//16.  Find the product of f3 and f4 and cout the result.
	product = f3.multiply(f4);
	cout << f3 << " * " << f4 << " = " << product << '\n';
	//17.  Find the quotient of f3 and f4 and cout the result.
	quotient = f3.divide(f4);
	cout << f3 << " / " << f4 << " = " << quotient << '\n';
	return 0;
}