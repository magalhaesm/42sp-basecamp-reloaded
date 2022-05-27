#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_copy_empty_string(void)
{
	char	str[] = "";
	char	*result = ft_strdup(str);
	char	*expected = strdup(str);
	ASSERT_EXPR(strcmp(result, str) == 0 && result != str);
	free(expected);
	free(result);
}

void	test_copy_string_with_printable_chars(void)
{
	char	str[] = "teste";
	char	*result = ft_strdup(str);
	char	*expected = strdup(str);
	ASSERT_EXPR(strcmp(result, str) == 0 && result != str);
	free(expected);
	free(result);
}

void	test_copy_string_with_non_printable_chars(void)
{
	char	str[] = {'a', 'b', 'c', -10, -20, '\0'};
	char	*result = ft_strdup(str);
	char	*expected = strdup(str);
	ASSERT_EXPR(strcmp(result, str) == 0 && result != str);
	free(expected);
	free(result);
}

int		test_ft_strdup(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_copy_empty_string),
		UNIT_TEST(test_copy_string_with_printable_chars),
		UNIT_TEST(test_copy_string_with_non_printable_chars),
	};
	return RUN_GROUP(tests);
}
