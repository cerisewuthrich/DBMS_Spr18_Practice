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

int main(){
	//12.  Instantiate 4 fractions named f1, f2, f3, f4 using the parameterized constructor - Yani Muskwe
	Fraction4123 f1(3, 4);
	Fraction4123 f2(10, 4);
	Fraction4123 f3(7, 8);
	Fraction4123 f4(5, 9);

	//13.  Instantiate 4 fractions named sum, difference, product, quotient using the parameterized constructor
	//- Yani Muskwe
	Fraction4123 sum(0, 0);
	Fraction4123 difference(0, 0);
	Fraction4123 product(0, 0);
	Fraction4123 quotient(0, 0);
  //14.  Find the sum of f1 and f2 and cout the result. - Garrett Gulker
	sum = f1.add(f2);
	cout << sum << endl;
  //15.  Find the difference of f2 and f3 and cout the result.

  //16.  Find the product of f3 and f4 and cout the result.

  //17.  Find the quotient of f3 and f4 and cout the result.
  return 0;
}