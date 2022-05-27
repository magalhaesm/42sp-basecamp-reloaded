#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_if_stores_the_results_correctly(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 5;
	b = 2;
	ft_div_mod(a, b, &div, &mod);
	ASSERT_EXPR((div == 2) && (mod == 1));
}

int	test_ft_div_mod(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_if_stores_the_results_correctly),
	};
	return RUN_GROUP(tests);
}
