#include "Fraction4123.h"

//1.  Implement Default constructor
//    Set num to 0 and den to 1 - Student Wuthrich
Fraction4123::Fraction4123()
{
  num = 0;
  den = 1;
}
//2.  Imprement parameterized constructor
//    Set num and den to values passed through parameters
Fraction4123::Fraction4123(int n, int d){
  

}


Fraction4123::~Fraction4123()
{

}
//3.  Implement both accessor functions
int Fraction4123::getNumerator(){
  return 345;
}

int Fraction4123::getDenominator(){
  return 345;
}
//4.  Implement both setters
void Fraction4123::setNumerator(int n){


}

void Fraction4123::setDenominator(int d){


}


// 5.  Implement the gcd function recursively
int gcd(int x, int y){
  return 1;
}
//6.  Implement function to simplify fraction
void simplify();

//Member functions that return the answer
//through a return statement

//7
Fraction4123 add(Fraction4123);
//8
Fraction4123 subtract(Fraction4123);
//9
Fraction4123 multiply(Fraction4123);
//10
Fraction4123 divide(Fraction4123);

//11
double toDecimal();

ostream & operator<<(ostream &out, Fraction4123 f){
  int whole = 1;
 // f.simplify();
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