#include "unity.h"
#include "string_compare.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_string_compare_given_Hello_and_Hello_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("Hello","Hello");
}

void test_string_compare_given_Hell_and_Hello_expect_0(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("Hell","Hello");
}
/*
void test_string_compare_given_taste_like_shit_and_taste_like_shits_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("taste like shit","taste like shit");
}

void test_string_compare_given_taste_like_shit_and_Taste_Like_Shit_expect_1(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("taste like shit","Taste Like Shit");
}

void test_string_compare_given_taste_like_shit_and_taste_like_shits_expect_0(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("taste like shit","taste like shits");
}

void test_string_compare_given_taste_like_shit_and_taste_like_expect_0(void)
{
    TEST_ASSERT_EQUAL(1,stringCompare("taste like shit","taste like");
}

void test_string_compare_Hi there!_My_name_is_The_Machine._What_is_yours(void)
{
	char *expectedReply=TheMachine("Hello");
    TEST_ASSERT_EQUAL_STRING("Hi there! My name is TheMachine. What is yours?",expectedReply);
}
*/


















/*
void test_string_compare_NeedToImplement(void)
{
    TEST_IGNORE_MESSAGE("Need to Implement string_compare");
}
*/