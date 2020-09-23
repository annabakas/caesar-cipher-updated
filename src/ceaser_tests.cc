/* test cases */

#include <gtest/gtest.h>

#include "ceaser.hh"

TEST(SquareRootTest, PositiveNos) {
    char word[7];
    strcpy(word, "GRQXWV");	
    EXPECT_EQ("DONUTS", shift(word, 3));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
