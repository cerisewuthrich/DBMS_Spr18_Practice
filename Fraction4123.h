#pragma once
#include<iostream>
using namespace std;

class Fraction4123
{

private:
  int num;
  int den;
  int gcd(int x, int y); //function to find gcd
public:
  //Default constructor sets numerator
  //to zero and denominator to 1
  Fraction4123();

  //Parameterized constructor sets numerator
  //and denominator based on parameters passed in
  Fraction4123(int n, int d);

  // Getters and setters
  int getNumerator();
  int getDenominator();
  void setNumerator(int n);
  void setDenominator(int d);

  //Function to simplify the fraction to lowest terms
  void simplify();

  //Member functions that return the answer
  //through a return statement

  Fraction4123 add(Fraction4123);
  Fraction4123 subtract(Fraction4123);
  Fraction4123 multiply(Fraction4123);
  Fraction4123 divide(Fraction4123);

  //Function to return the decimal equivalent of a Fraction
  double toDecimal();

  friend ostream & operator<<(ostream &out, Fraction4123 f);
  //Destructor
  ~Fraction4123();

  void fakeFunction();
};

