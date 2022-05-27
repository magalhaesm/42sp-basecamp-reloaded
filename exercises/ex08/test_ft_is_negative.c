#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_42_is_positive(void)
{
	char	*expected = "P";
	ft_is_negative(42);
	ASSERT_EXPR(strcmp(get_output(), expected) == 0);
}

void	test_zero_is_positve(void)
{
	char	*expected = "P";
	ft_is_negative(0);
	ASSERT_EXPR(strcmp(get_output(), expected) == 0);
}

void	test_negavive_prints_N(void)
{
	char	*expected = "N";
	ft_is_negative(-42);
	ASSERT_EXPR(strcmp(get_output(), expected) == 0);
}

int	test_ft_is_negative(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_42_is_positive),
		UNIT_TEST(test_zero_is_positve),
		UNIT_TEST(test_negavive_prints_N),
	};
	return RUN_GROUP(tests);
}
