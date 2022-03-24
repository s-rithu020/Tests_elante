#include "stdio.h"
#include "unity.h"

int add_integers(int param1, int param2)
{
    int sum = param1 + param2;
    return sum;
}

void test_add_integers()
{
    #if 0
    if(0 == add_integers(0, 0))
        printf("add function works\n");
    else
        printf("Add function is not working\n");

    if(30 == add_integers(10, 20))
        printf("add function works for positive numbers\n");
    else
        printf("Add function is not working\n");

    if(-30 == add_integers(-10, -20))
        printf("add function works for negative numbers\n");
    else
        printf("Add function is not working\n");
#endif

    TEST_ASSERT_EQUAL(0, add_integers(0,0));
    TEST_ASSERT_EQUAL(30, add_integers(10,20));
    TEST_ASSERT_EQUAL(-30, add_integers(-10,-20));
}

#if 0
int main()
{
    test_add_integers();
    return 0;
}
#endif