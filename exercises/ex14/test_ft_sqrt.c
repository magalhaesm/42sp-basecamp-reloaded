#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_sqrt_of_negative_is_zero(void)
{
	int	result;
	int expected;

	result = ft_sqrt(-42);
	expected = 0;
	ASSERT_EXPR(result == expected);
}

void	test_sqrt_of_zero_is_zero(void)
{
	int	result;
	int expected;

	result = ft_sqrt(0);
	expected = 0;
	ASSERT_EXPR(result == expected);
}

void	test_sqrt_of_one_is_one(void)
{
	int	result;
	int expected;

	result = ft_sqrt(1);
	expected = 1;
	ASSERT_EXPR(result == expected);
}

void	test_sqrt_of_irrational_number_is_zero(void)
{
	int	result;
	int expected;

	result = ft_sqrt(12);
	expected = 0;
	ASSERT_EXPR(result == expected);
}

void	test_sqrt_of_25_is_5(void)
{
	int	result;
	int expected;

	result = ft_sqrt(25);
	expected = 5;
	ASSERT_EXPR(result == expected);
}

int	test_ft_sqrt(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_sqrt_of_negative_is_zero),
		UNIT_TEST(test_sqrt_of_zero_is_zero),
		UNIT_TEST(test_sqrt_of_one_is_one),
		UNIT_TEST(test_sqrt_of_irrational_number_is_zero),
		UNIT_TEST(test_sqrt_of_25_is_5),
	};
	return RUN_GROUP(tests);
}
