#include "Fraction4123.h"

//1.  Implement Default constructor
//    Set num to 0 and den to 1 - Student Wuthrich
Fraction4123::Fraction4123()
{
	num = 1;
	den = 1;
}
//2.  Imprement parameterized constructor
//    Set num and den to values passed through parameters
Fraction4123::Fraction4123(int n, int d) {
	num = n;
	den = d;
	simplify();
}
Fraction4123::Fraction4123(const Fraction4123 & f) {
	num = f.num;
	den = f.den;
}

//3.  Implement both accessor functions
int Fraction4123::getNumerator() {
	return num;
}

int Fraction4123::getDenominator() {
	return den;
}
//4.  Implement both setters
void Fraction4123::setNumerator(int n) {
	num = n;
}

void Fraction4123::setDenominator(int d) {
	den = d;
}


// 5.  Implement the gcd function recursively
int Fraction4123::gcd(int x, int y) {
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}
//6.  Implement function to simplify fraction
void Fraction4123::simplify() {
	int f = gcd(num, den);
	num /= f;
	den /= f;
}

//Member functions that return the answer
//through a return statement

//7
Fraction4123 Fraction4123::add(Fraction4123 rhs) {
	Fraction4123 ans;
	ans.num = (num * rhs.den) + (rhs.num * den);
	ans.den = den * rhs.den;
	ans.simplify();
	return ans;
}
//8
Fraction4123 Fraction4123::subtract(Fraction4123 rhs) {
	Fraction4123 ans;
	ans.num = (num * rhs.den) - (rhs.num * den);
	ans.den = den * rhs.den;
	ans.simplify();
	return ans;
}
//9
Fraction4123 Fraction4123::multiply(Fraction4123 rhs) {
	Fraction4123 ans;
	ans.num = num * rhs.num;
	ans.den = den * rhs.den;
	ans.simplify();
	return ans;
}
//10
Fraction4123 Fraction4123::divide(Fraction4123 rhs) {
	Fraction4123 ans;
	ans.num = num * rhs.den;
	ans.den = den * rhs.num;
	ans.simplify();
	return ans;
}

//11
double Fraction4123::toDecimal() {
	return static_cast<int>(num / den);
}

ostream & operator<<(ostream &out, Fraction4123 f) {
	int whole = 1;
	//f.simplify();
	if (f.num < f.den) {
		if (f.num == 0)
			out << 0;
		else
			out << f.getNumerator() << "/" << f.getDenominator();
	}
	else {
		whole = f.num / f.den;
		if (f.num % f.den == 0)
			out << whole;
		else
			out << whole << " " << f.num % f.den << "/" << f.getDenominator();
	}
	return out;
}