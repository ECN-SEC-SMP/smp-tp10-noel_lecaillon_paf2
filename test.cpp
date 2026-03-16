#include <gtest/gtest.h>
#include "Calculator.h"





TEST(CalculatorTest, DivisionSimple) {
    Calculator calc;
    EXPECT_DOUBLE_EQ(2.0, calc.div(4.0, 2.0));
}



TEST(CalculatorTest, DivisionAvecMarge) {
    Calculator calc;

    EXPECT_NEAR(2.333, calc.div(7.0, 3.0), 0.001);
}


TEST(CalculatorTest, DivisionParZero) {
    Calculator calc;
    ASSERT_EXIT(calc.div(7.0, 0.0), ::testing::ExitedWithCode(255), "Error: Division by 0 not possible");
}