#ifndef __GCOMPLEX_H
#define __GCOMPLEX_H
#include<iostream>
template<typename T>
class Complex {
  T m_real;
  T m_image;
  public:
  Complex():m_real(0),m_image(0){

  }
  Complex(T a,T b):m_real(a),m_image(b){

  }

  void display(){
      std::cout<<m_real<<"+i"<<m_image<<"\n";
  }
};

#endif