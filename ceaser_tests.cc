/* test cases */

#include <gtest/gtest.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ceaser.hh"

//Testing correct comparisons has value of zero
TEST(StringCompareTest, CorrectCompare){
	char string1[12] = "Hello";
	char string2[12] = "DONUTS";
	char string3[12] = "PAINTING";
	ASSERT_EQ(0, stringCompare(string1, string1));
	ASSERT_EQ(0, stringCompare(string2, string2));
	ASSERT_EQ(0, stringCompare(string3, string3));
}

//Testing incorrect comparisons has value of one
TEST(StringCompareTest, IncorrectCompare){
	char string1[12] = "SUMMER";
	char string2[12] = "AUTUMN";
	char string3[12] = "WINTER";
	ASSERT_EQ(1, stringCompare(string1, string2));
	ASSERT_EQ(1, stringCompare(string2, string3));
	ASSERT_EQ(1, stringCompare(string1, string3));
}

//Testing two strings have the same content
TEST(ShiftWordTest, SingleWord){
	char shiftTen[12]  = "YZOBKDSXQ";
	char shiftThree[12] = "RSHUDWLQJ";
	char shiftTwenty[12] = "IJYLUNCHA";
	char string1[12] = "OPERATING";
	ASSERT_STREQ(string1, shift(shiftTen, 10));
	ASSERT_STREQ(string1, shift(shiftThree, 3));
	ASSERT_STREQ(string1, shift(shiftTwenty, 20));
}

//Testing two longer strings have the same content
TEST(ShiftWordTest, LongWords){
	char string1[50] = "TODAYISSEPTEMBERTWENTYSEVENTHTWENTYTWENTY";
	char shiftFive[50] = "YTIFDNXXJUYJRGJWYBJSYDXJAJSYMYBJSYDYBJSYD";
	char shiftTwelve[50] = "FAPMKUEEQBFQYNQDFIQZFKEQHQZFTFIQZFKFIQZFK";
	char shiftSixteen[50] = "JETQOYIIUFJUCRUHJMUDJOIULUDJXJMUDJOJMUDJO";
	ASSERT_STREQ(string1, shift(shiftFive, 5));
	ASSERT_STREQ(string1, shift(shiftTwelve, 12));
	ASSERT_STREQ(string1, shift(shiftSixteen, 16));
}

//Testing two strings after incorrect shifts have different contents
TEST(ShiftWordTest, IncorectShifts){
	char string1[12] = "RAINING";
	char shiftSixteen[12] = "HQYDYDW";
	char shiftSix[12] = "XGOTOTM";
	char shiftTen[12] = "BKSXSXQ";
	ASSERT_STRNE(string1, shift(shiftSixteen, 18));
	ASSERT_STRNE(string1, shift(shiftSix, 9));
	ASSERT_STRNE(string1, shift(shiftTen, 22));
}

//Testing that clearShifts successfully reset shifts
TEST(ResetShiftsTest, Reset){
	ASSERT_EQ(0, clearShifts());
}

//Testing that clearShifts unsuccessfully reset shifts
TEST(ResetShiftsTetst, BadReset){
	ASSERT_NE(1, clearShifts());
}

//Testing that dictionary2.txt file exists
TEST(DictionaryTest, DictionaryExists){
	char filename[20] = "dictionary2.txt";
	FILE *f = fopen(filename, "r");
	ASSERT_TRUE(f!=NULL);
}

//Testing the shift[] is incremented successfully
TEST(ShiftIncrementTest, IncrementCalled){
	int k = 12;
	ASSERT_EQ(0, increment(k));
}

//Testing that split() is called successfully
TEST(SplitTest, SplitCalled){
	char string[12] = "my name";
	ASSERT_EQ(0, split(string));
}


int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
