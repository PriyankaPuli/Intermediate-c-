#include<iostream>
#ifndef __CURRENCY_H
#define __CURRENCY_H

class Currency {
  int m_rupees;
  int m_paise;
  public:
  Currency();
  Currency(int,int);
  Currency(int);
  Currency operator+(const Currency&);
  Currency operator-(const Currency&);
  //Currency operator+(int);
  //Currency operator-(int);
  Currency& operator++();//prefix ++
  Currency operator++(int);//postfix++
  bool operator==(const Currency&);
  /*bool operator<(const Currency&);
  bool operator>(const Currency&);*/
  void display() const;
  friend std::ostream& operator<<(std::ostream&, const Currency&);
  int rupee(){return m_rupees;}
  int paise(){return m_paise;}

};
