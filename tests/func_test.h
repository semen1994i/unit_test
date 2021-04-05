#include <gtest/gtest.h>
#include <gmock/gmock-matchers.h>

extern "C" {
#include "func.h"
}

TEST(Func, two_sol) {
    solution res = Func(1, -2, -3);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(3, res.x2);
    EXPECT_EQ(2, res.count);
}

TEST(Func, one_sol) {
    solution res = Func(1, 12, 36);
    EXPECT_EQ(-6, res.x1);
    EXPECT_EQ(1, res.count);
}

TEST(Func, no_sol) {
    solution res = Func(2, -5, 5);
    EXPECT_EQ(0, res.count);
}

TEST(Func, test4_negative){
    solution res = Func(0, 1, 1);
    EXPECT_EQ(-1, res.x1);
    EXPECT_EQ(1, res.count);
}

TEST(Func, test5_negative){
    solution res = Func(0, 0, 0);
    EXPECT_EQ(1111, res.count);
}

TEST(Func, test6_negative){
    solution res = Func(0, 0, 1);
    EXPECT_EQ(0, res.count);
}

TEST(Func, test7_negative){
    solution res = Func(-1, -5, -10);
    EXPECT_EQ(0, res.count);
}

TEST(Func, test8){
    solution res = Func(1, 20, 3);
    EXPECT_EQ(-19.848857801796104, res.x1);
    EXPECT_EQ(-0.15114219820389607, res.x2);
    EXPECT_EQ(2, res.count);
}
