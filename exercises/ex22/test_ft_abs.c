#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

static void	test_return_absolute_value(void)
{
	int	n = -42;
	int	result = ABS(n);
	int	expected = 42;
	ASSERT_EXPR(result == expected);
}

int		test_ft_abs(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_return_absolute_value),
	};
	return RUN_GROUP(tests);
}
