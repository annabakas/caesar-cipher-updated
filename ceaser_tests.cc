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
TEST(StringCompareTest2, IncorrectCompare){
	char string1[12] = "SUMMER";
	char string2[12] = "AUTUMN";
	char string3[12] = "WINTER";
	ASSERT_EQ(1, stringCompare(string1, string2));
	ASSERT_EQ(1, stringCompare(string2, string3));
	ASSERT_EQ(1, stringCompare(string1, string3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
