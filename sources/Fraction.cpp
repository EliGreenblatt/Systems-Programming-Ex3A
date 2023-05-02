#include <iostream>
#include "Fraction.hpp"

using namespace std;
namespace ariel
{
    // class constructor taking two integers
    Fraction::Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;

        cout<<" building a fraction " <<endl;
    }

    // THE FOLLOWING OPERATORS ARE THE SIMPLE MATH + , - , * , /

    // we add the first const to the signature because we don't want to change the fraction we receive
    // so no need to copy it , the second const means we don't want to change THIS instance of fraction
    Fraction Fraction::operator+(const Fraction& otherFraction) const
    {
        cout<<" Adding two fractions" <<endl;
        return Fraction(1,1);
    }

    // the reason for the const keyword is the same as previous functions
    Fraction Fraction::operator-(const Fraction& otherFraction) const
    {
        cout<<" Subtracting two fractions" <<endl;
        return Fraction(1,1);
    }

    // the reason for the const keyword is the same as previous functions
    Fraction Fraction::operator*(const Fraction& otherFraction) const
    {
        cout<<" multiplying two fractions" <<endl;
        return Fraction(1,1);
    }

    // the reason for the const keyword is the same as previous functions
    Fraction Fraction::operator/(const Fraction& otherFraction) const
    {
        cout<<" dividing two fractions" <<endl;
        return Fraction(1,1);
    }


    // THE FOLLOWING OPERATORS ARE FOR DECIDING GREATER/LESS/EQUAL

    // the reason for the const keyword is the same as previous functions
    bool Fraction::operator==(const Fraction& otherFraction) const
    {
        cout<<" Checking two fractions" <<endl;
        return 0;
    }

    // the reason for the const keyword is the same as previous functions
    bool Fraction::operator>(const Fraction& otherFraction) const
    {
        cout<<" Checking two fractions" <<endl;
        return 0;
    }

    // the reason for the const keyword is the same as previous functions
    bool Fraction::operator<(const Fraction& otherFraction) const
    {
        cout<<" Checking two fractions" <<endl;
        return 0;
    }

    // the reason for the const keyword is the same as previous functions
    bool Fraction::operator>=(const Fraction& otherFraction) const
    {
        cout<<" Checking two fractions" <<endl;
        return 0;
    }

    // the reason for the const keyword is the same as previous functions
    bool Fraction::operator<=(const Fraction& otherFraction) const
    {
        cout<<" Checking two fractions" <<endl;
        return 0;
    }

    // THE FOLLOWING ARE POST AND PRE INCREMENTING OPERATORS


    Fraction Fraction::operator++()
    {
        cout<<"Pre incrementing operator"<<endl;
        return *this;
    }

    Fraction Fraction::operator++(int)
    {
        cout<<"Post incrementing operator"<<endl;
        return *this;
    }

    Fraction Fraction::operator--()
    {
        cout<<"Pre decrementing operator"<<endl;
        return *this;
    }

    Fraction Fraction::operator--(int)
    {
        cout<<"Post decrementing operator"<<endl;
        return *this;
    }

    // these are the << and >> operators
    std::ostream& operator<<(std::ostream& os, const Fraction& otherFraction)
    {
        cout<<"you have called the '<<' operator"<<endl;
        return os;
    }

    std::ostream& operator>>(std::ostream& os, const Fraction& otherFraction)
    {
        cout<<"you have called the '>>' operator"<<endl;
        return os;
    }

    // the following are friend operators , same as before just that they are defined outside the scope of the class

    Fraction operator+(const Fraction& otherFraction, float number) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator-(const Fraction& otherFraction, float number) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator*(const Fraction& otherFraction, float number) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator/(const Fraction& otherFraction, float number) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator+(float number, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator-(float number, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator*(float number, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    Fraction operator/(float number, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return otherFraction;
    }

    bool operator==(const Fraction& otherFraction, float otherFraction2) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator>(const Fraction& otherFraction, float otherFraction2) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator<(const Fraction& otherFraction, float otherFraction2) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator>=(const Fraction& otherFraction, float otherFraction2) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator<=(const Fraction& otherFraction, float otherFraction2) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator==(float otherFraction2, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator>(float otherFraction2, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator<(float otherFraction2, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator>=(float otherFraction2, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
    }

    bool operator<=(float otherFraction2, const Fraction& otherFraction) 
    {
    cout<<"Friend operator"<<endl;
    return 0;
};
}

