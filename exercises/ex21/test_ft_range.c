#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_returns_null_when_min_is_equal_to_max(void)
{
	int	min = 0;
	int	max = 0;
	int	*result = ft_range(min, max);
	int	*expected = NULL;
	ASSERT_EXPR(result == expected);
}

void	test_returns_null_when_min_is_greater_to_max(void)
{
	int	min = 42;
	int	max = 0;
	int	*result = ft_range(min, max);
	int	*expected = NULL;
	ASSERT_EXPR(result == expected);
}

void	test_returns_an_array_of_int_with_correct_values(void)
{
	int	min = 3;
	int	max = 7;
	int	*result = ft_range(min, max);
	int	expected[] = {3, 4, 5, 6};
	int	len = SIZEOF_ARRAY(expected);
	ASSERT_EXPR(int_arr_cmp(result, expected, len) == 0);
	free(result);
}

void	test_returns_an_array_of_int_with_negative_ints(void)
{
	int	min = -3;
	int	max = 7;
	int	*result = ft_range(min, max);
	int	expected[] = {-3, -2, -1, 0, 1, 2, 3, 4, 5, 6};
	int	len = SIZEOF_ARRAY(expected);
	ASSERT_EXPR(int_arr_cmp(result, expected, len) == 0);
}

int		test_ft_range(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_returns_null_when_min_is_equal_to_max),
		UNIT_TEST(test_returns_null_when_min_is_greater_to_max),
		UNIT_TEST(test_returns_an_array_of_int_with_correct_values),
		UNIT_TEST(test_returns_an_array_of_int_with_negative_ints),
	};
	return RUN_GROUP(tests);
}
