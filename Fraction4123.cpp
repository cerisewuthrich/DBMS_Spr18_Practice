#include "Fraction4123.h"

//1.  Implement Default constructor
//    Set num to 0 and den to 1 - Student Wuthrich
Fraction4123::Fraction4123()
{
  num = 0;
  den = 1;
}
//2.  Imprement parameterized constructor
//    Set num and den to values passed through parameters - Samuel Mullins
Fraction4123::Fraction4123(int n, int d){
	num = n;
	if (d != 0)
		den = d;
	else{
		cout << "denominator cannot equal 0" << endl;
		den = 1;
	}
}


Fraction4123::~Fraction4123()
{

}
//3.  Implement both accessor functions - Keona Rollerson
int Fraction4123::getNumerator(){
  return num;
}

int Fraction4123::getDenominator(){
  return den;
}
//4.  Implement both setters - Jesse Houk
void Fraction4123::setNumerator(int n){
	num = n;
}

void Fraction4123::setDenominator(int d){
	if (d != 0)
		den = 0;
	else {
		cout << "denominator cannot equal 0\n";
		den = 1;
	}
}


//     Implemented recursive Euclid's algorithm - Holden Hall
// Example 8 and 12
//x: 8
//y: 12
//x: 12
//y: 8
//x: 8
//y: 4
// return 4    
int Fraction4123::gcd(int x, int y){
	if (y == 0)
		return x;
	return gcd(y, x % y);
}
//6.  Implement function to simplify fraction - Cory Press
void Fraction4123::simplify() {
	int GCD = gcd(num, den);
	if (GCD == 0) {
		den = 1;
	}
	else {
		num = num / GCD;
		den = den / GCD;
	}
}

//Member functions that return the answer
//through a return statement

//7 Implements fraction addition - Yani Muskwe
Fraction4123 Fraction4123::add(Fraction4123 frac, Fraction4123 frac_2){
	Fraction4123 sum;
	if (frac.den != frac_2.den)//no common denominator
	{
		sum.num = (frac.num * frac_2.den) + (frac_2.num * frac.den);
		sum.den = frac.den * den;
	}
	else
	{
		sum.den = frac.den;
		sum.num = frac.num + frac_2.num;
	}
	
	return sum;
}
//8
Fraction4123 Fraction4123::subtract(Fraction4123) {
	Fraction4123 diff;
	return diff;
}
//9
Fraction4123 Fraction4123::multiply(Fraction4123) {
	Fraction4123 product;
	return product;
}
//10
Fraction4123 Fraction4123::divide(Fraction4123) {
	Fraction4123 quotient;
	return quotient;
}

//11
double Fraction4123::toDecimal() {
	return .75;
}

ostream & operator<<(ostream &out, Fraction4123 f){
  int whole = 1;
  f.simplify();
  if (f.num < f.den){
    if (f.num == 0)
      out << 0;
    else
      out << f.getNumerator() << "/" << f.getDenominator();
  }
  else{
    whole = f.num / f.den;
    if (f.num % f.den == 0)
      out << whole;
    else
      out << whole << " " << f.num % f.den << "/" << f.getDenominator();
  }
  return out;
}
