
#ifndef __FRACTION_H
#define __FRACTION_H

using namespace std;
#include<iostream>
#include<math.h>
class Fraction {
  int m_numerator;
  int m_denominator;
  public:
  Fraction();
  Fraction(int,int);
  Fraction(int);
  Fraction operator+(const Fraction&);
  Fraction operator-(const Fraction&);
  Fraction operator*(const Fraction&);
  //Fraction operator+(int);
  //Fraction operator-(int);
  bool operator==(const Fraction&);
  /*bool operator<(const Fraction&);
  bool operator>(const Fraction&);
  Fraction simplify();
  bool isSimplest() const;*/
  void display() const;
  friend std::ostream& operator<<( std::ostream&, const Fraction&);
  int numerator(){return m_numerator;}
  int denominator(){return m_denominator;}
};

#endif
