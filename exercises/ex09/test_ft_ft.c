#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_if_sets_the_value_to_42(void)
{
	int value;

	value = 0;
	ft_ft(&value);
	ASSERT_EXPR(value == 42);
}

int	test_ft_ft(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_if_sets_the_value_to_42),
	};
	return RUN_GROUP(tests);
}
