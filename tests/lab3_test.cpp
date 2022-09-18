#include <lab3.h>

#include <gtest/gtest.h>

TEST(Lab3Tests, SimpleTest) {
    EXPECT_EQ(GetHelloWorld(), "Hello, world");
}