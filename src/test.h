// test.h
#ifndef INCLUDED_TEST
#define INCLUDED_TEST

#include <iostream>

namespace StevensDev
{
  class Test
  {
    private:
      int test;
        // For testing.
    public:
      // CONSTRUCTORS
      Test( int testNumber );
        // Constructor utilizing test number.
  };
  
  // CONSTRUCTORS
  inline
  Test::Test( int testNumber ) : test(testNumber)
  {
    std::cout << "The test number is " << test;
  }
  
}
