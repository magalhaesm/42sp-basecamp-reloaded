#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

static void test_fact_of_negative_is_zero(void)
{
	int	result;
	int expected;

	result = ft_recursive_factorial(-10);
	expected = 0;
	ASSERT_EXPR(result == expected);
}

static void test_fact_of_zero_is_one(void)
{
	int	result;
	int	expected;

	result = ft_recursive_factorial(0);
	expected = 1;
	ASSERT_EXPR(result == expected);
}

static void test_fact_of_5_is_120(void)
{
	int	result;
	int	expected;

	result = ft_recursive_factorial(5);
	expected = 120;
	ASSERT_EXPR(result == expected);
}

static void test_fact_of_12_is_479001600(void)
{
	int	result;
	int	expected;

	result = ft_recursive_factorial(12);
	expected = 479001600;
	ASSERT_EXPR(result == expected);
}

static void test_fact_greater_than_12_returns_0(void)
{
	int	result;
	int	expected;

	result = ft_recursive_factorial(13);
	expected = 0;
	ASSERT_EXPR(result == expected);
}

int test_ft_recursive_factorial(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_fact_of_negative_is_zero),
		UNIT_TEST(test_fact_of_zero_is_one),
		UNIT_TEST(test_fact_of_5_is_120),
		UNIT_TEST(test_fact_of_12_is_479001600),
		UNIT_TEST(test_fact_greater_than_12_returns_0),
	};
	return RUN_GROUP(tests);
}
