/* test cases */

#include <gtest/gtest.h>

#include "ceaser.hh"

TEST(StringCompareTest, CorrectCompare){
	char string1[12] = "Hello";
	char string2[12] = "Hello";
	char string3[12] = "DONUTS";
	char string4[12] = "DONUTS";
	ASSERT_EQ(0, stringCompare(string1, string2));
	ASSERT_EQ(0, stringCompare(string3, string4));
	
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
