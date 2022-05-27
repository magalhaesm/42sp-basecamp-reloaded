#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_if_behave_like_strcmp_with_different_lowercase_strings(void)
{
	char	*s1 = "gosto mais de batata";
	char	*s2 = "gosto mais de estudar";
	int		result = ft_strcmp(s1, s2);
	int		expected = strcmp(s1, s2);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strcmp_with_different_uppercase_strings(void)
{
	char	*s1 = "CHAR";
	char	*s2 = "CHARLINHO";
	int		result = ft_strcmp(s1, s2);
	int		expected = strcmp(s1, s2);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strcmp_with_different_mixedcase_strings(void)
{
	char	*s1 = "There Is a Light That Never Goes Out";
	char	*s2 = "There Is a Light";
	int		result = ft_strcmp(s1, s2);
	int		expected = strcmp(s1, s2);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strcmp_with_void_and_non_void_strings(void)
{
	char	*s1 = "";
	char	*s2 = "Enjoy the Silence";
	int		result = ft_strcmp(s1, s2);
	int		expected = strcmp(s1, s2);
	ASSERT_EXPR(result == expected);
}

void	test_if_behave_like_strcmp_with_non_printable_chars(void)
{
	char	*s1 = "abcdefghi";
	char	s2[] = {'a', 'b', 'c', -10, -20, '\0'};
	int		result = ft_strcmp(s1, s2);
	int		expected = strcmp(s1, s2);
	ASSERT_EXPR(result == expected);
}

int	test_ft_strcmp(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_if_behave_like_strcmp_with_different_lowercase_strings),
		UNIT_TEST(test_if_behave_like_strcmp_with_different_uppercase_strings),
		UNIT_TEST(test_if_behave_like_strcmp_with_different_mixedcase_strings),
		UNIT_TEST(test_if_behave_like_strcmp_with_void_and_non_void_strings),
		UNIT_TEST(test_if_behave_like_strcmp_with_non_printable_chars),
	};
	return RUN_GROUP(tests);
}
