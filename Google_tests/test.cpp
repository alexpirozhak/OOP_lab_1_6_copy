//
// Created by Олександр Пірожак on 13.03.2024.
//

#include "gtest/gtest.h"
#include "../BusC.h"

TEST(BusCTestSuite, BusCTest) {
BusC b;
b.setSeats(5);
ASSERT_EQ(b.getSeats(), 5);
}