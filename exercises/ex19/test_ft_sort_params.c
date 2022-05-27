#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

#define ARRAY_SIZE(array) (sizeof(array) / sizeof(array[0]))

void	test_sort_with_no_params(void)
{
	char	*args[] = {"program"};
	ft_sort_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_sort_with_one_param(void)
{
	char	*args[] = {"program", "abacaxi"};
	ft_sort_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "abacaxi\n";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

void	test_sort_with_more_than_one_param(void)
{
	char	*args[] = {"program", "banana", "maçã", "abacaxi"};
	ft_sort_params(ARRAY_SIZE(args), args);
	char	*result = get_output();
	char	*expected = "abacaxi\nbanana\nmaçã\n";
	ASSERT_EXPR(strcmp(result, expected) == 0);
}

int	test_ft_sort_params(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_sort_with_no_params),
		UNIT_TEST(test_sort_with_one_param),
		UNIT_TEST(test_sort_with_more_than_one_param),
	};
	return RUN_GROUP(tests);
}
