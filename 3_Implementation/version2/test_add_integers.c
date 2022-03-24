#include "unity.h"
#include "add_integer.h"

//extern void manual_test_add_integers();

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_add_integers()
{
    int expected_sum = 0;
    int result_sum = 0;
    TEST_ASSERT_EQUAL(SUCCESS, add_integers(0, 0, &result_sum));
    TEST_ASSERT_EQUAL(expected_sum, result_sum);

    TEST_ASSERT_EQUAL(SUCCESS, add_integers(10, 20, &result_sum));
    TEST_ASSERT_EQUAL(30, result_sum);

    TEST_ASSERT_EQUAL(SUCCESS, add_integers(-10, -20, &result_sum));
    TEST_ASSERT_EQUAL(-30, result_sum);
    /*
    TEST_ASSERT_EQUAL(0, add_integers(0,0));
    TEST_ASSERT_EQUAL(30, add_integers(10,20));
    TEST_ASSERT_EQUAL(-30, add_integers(-10,-20));
    */
}

void automated_test_add_overflow()
{
    int expected_sum = 0;
    int result_sum = 0;
    TEST_ASSERT_EQUAL(OVERFLOW, add_integers(INT_MAX, 1, &result_sum));
    //TEST_ASSERT_EQUAL(0, add_integers(INT_MAX, 1));
}

void automated_test_add_underflow()
{
    int expected_sum = 0;
    int result_sum = 0;
    TEST_ASSERT_EQUAL(UNDERFLOW, add_integers(INT_MIN, -1, &result_sum));
    //TEST_ASSERT_EQUAL(0, add_integers(INT_MIN, -1));
}

int main(void)
{
    //manual_test_add_integers();

    UnityBegin(NULL);

    //RUN_TEST(test_add_integers);
    RUN_TEST(automated_test_add_integers);
    RUN_TEST(automated_test_add_overflow);
    RUN_TEST(automated_test_add_underflow);

    return(UnityEnd());
}