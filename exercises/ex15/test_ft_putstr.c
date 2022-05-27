#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_write_string_to_stdout(void)
{
	char	*test = "string";
	char	*expected = "string";
	ft_putstr(test);
	char	*result = get_output();
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	test_ft_putstr(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_write_string_to_stdout),
	};
	return RUN_GROUP(tests);
}
