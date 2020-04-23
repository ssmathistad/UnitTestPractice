/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

// Tests for isPalindrome

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("aa");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, is_not_a_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Ba");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, single_char_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("a");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, case_insensitive_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("Bab");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, not_palindrome_from_start_to_end)
{
    Practice obj;
    bool actual = obj.isPalindrome("aab");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, case_insensitive_not_palindrome_from_start_to_end)
{
    Practice obj;
    bool actual = obj.isPalindrome("aAB");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, racecar_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, racecpr_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("racecpr");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, raar_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("raar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, raal_not_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("raal");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, tattarrattat_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("tattarrattat");
    ASSERT_TRUE(actual);
}

// Tests for sortDescending

TEST(PracticeTest, given_in_asc_order)
{
    Practice obj;
    int first = 2;
    int second = 3;
    int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, given_in_desc_order)
{
    Practice obj;
    int first = 4;
    int second = 3;
    int third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, given_in_desc_order_false)
{
    Practice obj;
    int first = 4;
    int second = 3;
    int third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_FALSE(first == 3);
    ASSERT_FALSE(second == 4);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, given_two_of_the_same_value)
{
    Practice obj;
    int first = 4;
    int second = 3;
    int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 4);
    ASSERT_TRUE(third == 3);
}

TEST(PracticeTest, given_two_of_the_same_value_false)
{
    Practice obj;
    int first = 4;
    int second = 3;
    int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_FALSE(first == 3);
    ASSERT_TRUE(second == 4);
    ASSERT_FALSE(third == 4);
}

TEST(PracticeTest, given_two_of_the_same_value_dif_order)
{
    Practice obj;
    int first = 3;
    int second = 4;
    int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 4);
    ASSERT_TRUE(third == 3);
}

TEST(PracticeTest, mixed_order_243)
{
    Practice obj;
    int first = 2;
    int second = 4;
    int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, mixed_order_423)
{
    Practice obj;
    int first = 4;
    int second = 2;
    int third = 3;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, mixed_order_342)
{
    Practice obj;
    int first = 3;
    int second = 4;
    int third = 2;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, mixed_order_324)
{
    Practice obj;
    int first = 3;
    int second = 2;
    int third = 4;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == 4);
    ASSERT_TRUE(second == 3);
    ASSERT_TRUE(third == 2);
}

TEST(PracticeTest, negative_test)
{
    Practice obj;
    int first = -3;
    int second = -2;
    int third = -4;
    obj.sortDescending(first, second, third);
    ASSERT_TRUE(first == -2);
    ASSERT_TRUE(second == -3);
    ASSERT_TRUE(third == -4);
}