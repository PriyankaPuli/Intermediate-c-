#include"fraction.h"
Fraction::Fraction():m_numerator(1),m_denominator(1)
{
}
Fraction::Fraction(int num,int denom):m_numerator(num),m_denominator(denom)
{

}
Fraction::Fraction(int val):m_numerator(val),m_denominator(1)
{
}
Fraction Fraction::operator+(const Fraction& ref)
{
    return Fraction(this->m_numerator+ref.m_numerator,this->m_denominator+ref.m_denominator);
}
Fraction Fraction::operator-(const Fraction& ref)
{
    return Fraction(this->m_numerator-ref.m_numerator,this->m_denominator-ref.m_denominator);
}
Fraction Fraction::operator*(const Fraction& ref)
{
    return Fraction(this->m_numerator*ref.m_numerator,this->m_denominator*ref.m_denominator);
}
bool Fraction::operator==(const Fraction& ref)
{
    return (m_numerator==ref.m_numerator)&&(m_denominator==ref.m_denominator);
}
void Fraction::display() const
{
    cout<<"Numerator:"<<m_numerator
    <<"Denominator:"<<m_denominator;
}
std::ostream& operator<<( std::ostream& rout, const Fraction& ref)
{
    rout<<ref.m_numerator<<"+"<<ref.m_denominator;
    return rout;
}
int Fraction::numerator()
{
    return m_numerator;
}
int Fraction::denominator()
{
    return m_denominator;
}
 