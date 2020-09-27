/* test cases */

#include <gtest/gtest.h>

#include "ceaser.hh"

//Testing correct comparisons (matched words)
TEST(StringCompareTest, CorrectCompare){
	char string1[12] = "Hello";
	char string2[12] = "Hello";
	char string3[12] = "DONUTS";
	char string4[12] = "DONUTS";
	char string5[12] = "PAINTING";
	char string6[12] = "PAINTING";
	ASSERT_EQ(0, stringCompare(string1, string2));
	ASSERT_EQ(0, stringCompare(string3, string4));
	ASSERT_EQ(0, stringCompare(string5, string6));
}

//Testing incorrect comparisons (different words)
TEST(StringCompareTest, IncorrectCompare){
	char string1[12] = "SUMMER";
	char string2[12] = "AUTUMN";
	char string3[12] = "WINTER";
	ASSERT_EQ(1, stringCompare(string1, string2));
	ASSERT_EQ(1, stringCompare(string2, string3));
	ASSERT_EQ(1, stringCompare(string1, string3));
}

//Testing shifting a word by a certain shift/key
TEST(ShiftWordTest, SingleWord){
	char shiftTen[12]  = "YZOBKDSXQ";
	char shiftThree[12] = "RSHUDWLQJ";
	char shiftTwenty[12] = "IJYLUNCHA";
	char string1[12] = "OPERATING";
	ASSERT_STREQ(string1, shift(shiftTen, 10));
	ASSERT_STREQ(string1, shift(shiftThree, 3));
	ASSERT_STREQ(string1, shift(shiftTwenty, 20));
}

//Testing shifting long words/sentences by a certain shift/key
TEST(ShiftWordTest, LongWords){
	char string1[50] = "TODAYISSEPTEMBERTWENTYSEVENTHTWENTYTWENTY";
	char shiftFive[50] = "YTIFDNXXJUYJRGJWYBJSYDXJAJSYMYBJSYDYBJSYD";
	char shiftTwelve[50] = "FAPMKUEEQBFQYNQDFIQZFKEQHQZFTFIQZFKFIQZFK";
	char shiftSixteen[50] = "JETQOYIIUFJUCRUHJMUDJOIULUDJXJMUDJOJMUDJO";
	ASSERT_STREQ(string1, shift(shiftFive, 5));
	ASSERT_STREQ(string1, shift(shiftTwelve, 12));
	ASSERT_STREQ(string1, shift(shiftSixteen, 16));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
