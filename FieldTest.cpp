/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"

class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;

	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}


TEST(FieldTest,isSafe){
  Field minefield;
  minefield.placeMine(5,5);
  minefield.isSafe(5,5);
  ASSERT_EQ(MINE_SHOWN,minefield.get(5,5));
  ASSERT_FALSE(MINE_SHOWN);
  ASSERT_TRUE(MINE_HIDDEN);
  // try{
  //
  // minefield.placeMine(-1,5);
  // minefield.isSafe(-1,5);
  // ASSERT_EQ(MINE_SHOWN,minefield.get(-1,5));
  // }
  // catch(int e){
  //   std::cout<<"exception: "<<e<<std::endl;
  // }



}
