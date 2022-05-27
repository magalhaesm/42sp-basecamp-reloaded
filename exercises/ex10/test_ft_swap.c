#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_if_swaps_the_values(void)
{
	int a;
	int b;

	a = 10;
	b = 42;
	ft_swap(&a, &b);
	ASSERT_EXPR((a == 42) && (b == 10));
}

int	test_ft_swap(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_if_swaps_the_values),
	};
	return RUN_GROUP(tests);
}
