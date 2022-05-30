#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

static void	test_invalid_length_does_nothing(void)
{
	clean_buf();
	int		test[] = {1, 2, 3, 4, 5};
	char	expected[] = "";
	char	*result = get_output();
	ft_foreach(test, 0, &ft_putnbr);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

static void	test_apply_a_function_to_array(void)
{
	int		test[] = {1, 2, 3, 4, 5};
	char	expected[] = {'1', '2', '3', '4', '5'};
	char	*result = get_output();
	ft_foreach(test, SIZEOF_ARRAY(test), &ft_putnbr);
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int		test_ft_foreach(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_invalid_length_does_nothing),
		UNIT_TEST(test_apply_a_function_to_array),
	};
	return RUN_GROUP(tests);
}
