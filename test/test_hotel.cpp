#include "gtest/gtest.h"

extern "C" {
  #include "../include/hotel.h"
}

int test_get_conference_fee()
{
  get_conference_fee();

  return 0;
}

int test_get_hotel_fee()
{
  get_hotel_fee();

  return 0;
}

TEST(hotel, get_conference_fee) {
  EXPECT_EQ(test_get_conference_fee(), 0);
}

TEST(hotel, get_hotel_fee) {
  EXPECT_EQ(test_get_hotel_fee(), 0);
}