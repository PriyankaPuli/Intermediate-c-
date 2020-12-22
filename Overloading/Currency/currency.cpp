#include"currency.h"
Currency::Currency():m_rupees(0),m_paise(0)
{
}
Currency::Currency(int rupee,int paise):m_rupees(rupee),m_paise(paise)
{
}
Currency::Currency(int rupee):m_rupees(rupee),m_paise(paise)
{
}
Currency Currency::operator+(const Currency& ref)
{
    return Currency(this->m_rupees+ref.m_rupees,this->m_paise+ref.m_paise);
}
Currency::Currency operator-(const Currency& ref)
{
    return Currency(this->m_rupees-ref.m_rupees,this->m_paise-ref.m_paise);
}
Currency& Currency::operator++()
{
    ++m_rupees;
    ++m_paise;
    return *this;
}
Currency Currency::operator++(int)
{
      Currency temp(m_rupees,m_paise);
      m_rupees++;
      m_paise++;
      return temp;
}
bool Currency::operator==(const Currency& ref)
{
    return (m_rupees==ref.m_rupees)&&(m_paise==ref.m_paise);
}
void Currency::display() const
{
    cout<<"Rupees:"<<m_rupees
    <<"Paise:"<<m_paise;
}
std::ostream& operator<<(std::ostream& rout, const Currency& ref)
{
    rout<<ref.m_rupees<<"+"<<ref.m_paise;
    return rout;
}
int Currency::rupee()
{
      return m_rupees;
}
int Currency::paise()
{
    return m_paise;
}

