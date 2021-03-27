#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "func.h"
}

TEST(Func, two_sol) {
    solution res = Func(1, -2, -3);
    EXPECT_EQ(1, res.x1);
    EXPECT_EQ(3, res.x2);
}

TEST(Func, one_sol) {
    solution res = Func(1, 12, 36);
    EXPECT_EQ(-6, res.x1);
}

TEST(Func, no_sol) {
    solution res = Func(2, -5, 5);
    EXPECT_EQ(0, res.count);
}

TEST(Func, test4_negative){
    solution res = Func(0, 1, 0);
    EXPECT_EQ(0, res.x1);
}

TEST(Func, test5_negative){
    solution res = Func(-1, -5, -10);
    EXPECT_EQ(0, res.count);
}
