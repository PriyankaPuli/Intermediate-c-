#ifndef __GPOINT_H
#define __GPOINT_H
#include<iostream>
#include<cmath>
using namespace std;

enum Quadrant {
  Q1,
  Q2,
  Q3,
  Q4
};


template<typename T>
class Point {
  T m_x;
  T m_y;
  public:
  Point():m_x(0),m_y(0)
  {

  }
  Point(T a,T b):m_x(a),m_y(b){

  }
  void distanceFromOrigin(){
    T k=sqrt(m_x*m_x+m_y*m_y);
    cout<<k<<endl;
}
Quadrant quadrant(){
  if((m_x>0 && m_y>0)){
    return Q1;
  }
  else if((m_x<0&&m_y>0)){
    return  Q2;
  }
  else if((m_x<0&&m_y<0)){
    return Q3;
  }
  else{
    return Q4;
  }
}

void display(){
  cout<<"("<<m_x<<" ,"<<m_y<<")"<<endl;
}
};

#endif