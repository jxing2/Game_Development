// game.m.cpp
#include <iostream>
#include <gtest/gtest.h>
#include <cmath>
#include "./src/test.h"

double square( const double x )
{
	return pow( x , 2.0 );
}

double squareRoot( const double x )
{
	if( x < 0 )
	{
		return -1.0;
	}
	return sqrt( x );
}
// Trivial tests.
TEST( SquareRootAndSquareTest , Number )
{
	ASSERT_EQ( squareRoot ( square( 100.0 ) ) , square( 10.0 ) );
	ASSERT_EQ( squareRoot ( square( 100.0 ) )  , square( -10.0 ) );
	ASSERT_EQ( squareRoot ( square( 0 ) ) , square( 0.0 ) );
}

TEST( SquareTest , Number )
{
	ASSERT_EQ( 100 , square( 10.0 ) );
	ASSERT_EQ( 100 , square( -10.0 ) );
	ASSERT_EQ( 0 , square( 0.0 ) );
}

TEST( EqualTest , Constant )
{
	ASSERT_EQ( 100 , 100.0 );
}

int main( int argc, char ** argv )
{
  StevensDev::Test( 5 );
  testing::InitGoogleTest( &argc , argv );
  return RUN_ALL_TESTS();
}
