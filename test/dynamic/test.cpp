#include <gtest/gtest.h>

#include "../xoroshiro128pp.hpp"
#include "fenwick.hpp"
#include "rankselect.hpp"

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
