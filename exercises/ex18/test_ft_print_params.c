#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

void	test_with_no_params(void)
{
	char	*args[] = {"program"};
	ft_print_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_with_one_param(void)
{
	char	*args[] = {"program", "test1"};
	ft_print_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "test1\n";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_with_more_than_one_param(void)
{
	char	*args[] = {
		"program", "xPpVDyMdW", "aeG2msY", "dq7DTm", "enAbOzpUcTj"
	};
	ft_print_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "xPpVDyMdW\naeG2msY\ndq7DTm\nenAbOzpUcTj\n";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	test_ft_print_params(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_with_no_params),
		UNIT_TEST(test_with_one_param),
		UNIT_TEST(test_with_more_than_one_param),
	};
	return RUN_GROUP(tests);
}
