#include "doctest.h"
#include "sources/Fraction.hpp"
using namespace ariel;

TEST_CASE("Test Increment/Decrement operators") 
{
    Fraction f(0,1);
    Fraction f2(1,1);
    CHECK_NOTHROW(f++);
    CHECK_NOTHROW(f--);
    CHECK_NOTHROW(++f);
    CHECK_NOTHROW(--f);

    CHECK(f2 == ++f);
    CHECK(f == --f2);

    CHECK_FALSE(f2 == ++f);
    
}

TEST_CASE("Test Add/Subtract numbers from fractions") 
{
    Fraction f(0,1);
    Fraction f2(0,1);
    
    CHECK_EQ(f - 0.1, 0);
    CHECK_EQ(f2 - 0.1 , 0);
    CHECK_EQ(0.1 - f , 0);
    CHECK_EQ(0.1 + f , 0.2);
}

TEST_CASE("Test Add/Subtract fractions from fractions") 
{
    Fraction f(0,1);
    Fraction f2(0,1);
    CHECK_EQ(f + f2 , 0.2);
    CHECK_EQ(f - f2 , 0);
    CHECK_EQ(f2 + f , 0);
    CHECK_EQ(f2 - f , 0);

    CHECK_EQ(f + f2 , f2 + f);
    CHECK_EQ(f - f2 , f2 - f);
    
}

TEST_CASE("Test Multiply/Divide numbers from fractions") 
{
    Fraction f(0,1);
    CHECK_EQ(f * 5 , 0.5);
    CHECK_EQ(f / 2 , 0.05);
    CHECK_EQ(5 * f , 0.5);
    CHECK_EQ(2 / f , 20);
}

TEST_CASE("Test Multiply/Divide fraction from fractions") 
{
    Fraction f(0,1);
    Fraction f2(0,1);
    CHECK_NOTHROW(f * f2);
    CHECK_NOTHROW(f2 * f);
    CHECK_EQ(f2 * f , f * f2);
    CHECK_EQ(f2 * f , 0.001);
    CHECK_NOTHROW(f / f2);
}

TEST_CASE("Testing Specific Cases")
{
    CHECK_THROWS(Fraction (0,0));
    Fraction f2(1,1);
    Fraction f3(0,10);
    CHECK_EQ(f2 + f3 , f2);

}