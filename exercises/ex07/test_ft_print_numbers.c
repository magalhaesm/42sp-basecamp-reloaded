#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_write_numbers_to_stdout(void)
{
	char	*expected = "0123456789";
	ft_print_numbers();
	ASSERT_EXPR(strcmp(get_output(), expected) == 0);
}

int		test_ft_print_numbers()
{
	t_unit_test tests[] = {
		UNIT_TEST(test_write_numbers_to_stdout),
	};
	return RUN_GROUP(tests);
}
