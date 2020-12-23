#include "account.h"
#include <gtest/gtest.h>
namespace {
TEST(Account, Empty_Cosnstructor) {
    Account A1;
  EXPECT_EQ(0.0, A1.getBalance());
}

TEST(Account, Parameterized_Cosnstructor) {
    Account A1("500", "Priya", 800);
  EXPECT_EQ(500.0, A1.getBalance());
}

TEST(Account, Transaction) {
    Account A1("500", "Priya", 800);
    A1.debit(500);
    A1.credit(52.5);
    EXPECT_EQ(352.5, A1.getBalance());
}
}
