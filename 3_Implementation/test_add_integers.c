#include "unity.h"

extern void manual_test_add_integers();

void setUp(void)
{
}

void tearDown(void)
{
}

void automated_test_add_integers()
{
    TEST_ASSERT_EQUAL(0, add_integers(0,0));
    TEST_ASSERT_EQUAL(30, add_integers(10,20));
    TEST_ASSERT_EQUAL(-30, add_integers(-10,-20));
}

int main(void)
{
    manual_test_add_integers();
    
    UnityBegin(NULL);

    RUN_TEST(test_add_integers);

    return(UnityEnd());
}