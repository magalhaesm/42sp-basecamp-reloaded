#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_if_behave_like_strlen_with_lowercase_strings(void)
{
	char	*test = "gosto mais de batata";
	int		result = ft_strlen(test);
	int		expected = (int)strlen(test);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strlen_with_uppercase_strings(void)
{
	char	*test = "E GOSTO MAIS DE ESTUDAR";
	int		result = ft_strlen(test);
	int		expected = (int)strlen(test);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strlen_with_mixedcase_strings(void)
{
	char	*test = "ChArLiNhO";
	int		result = ft_strlen(test);
	int		expected = (int)strlen(test);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strlen_with_void_strings(void)
{
	char	*test = "";
	int		result = ft_strlen(test);
	int		expected = (int)strlen(test);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strlen_with_non_printable_chars(void)
{
	char	test[] = {'a', 127, 'c', -10, -20};
	int		result = ft_strlen(test);
	int		expected = (int)strlen(test);
	ASSERT_EXPR(result == expected);
}

int	test_ft_strlen(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_if_behave_like_strlen_with_lowercase_strings),
		UNIT_TEST(test_if_behave_like_strlen_with_uppercase_strings),
		UNIT_TEST(test_if_behave_like_strlen_with_mixedcase_strings),
		UNIT_TEST(test_if_behave_like_strlen_with_void_strings),
		UNIT_TEST(test_if_behave_like_strlen_with_non_printable_chars),
	};
	return RUN_GROUP(tests);
}
