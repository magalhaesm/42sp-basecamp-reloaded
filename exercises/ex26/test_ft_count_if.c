#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

static int	is_capitalized(char *str)
{
	if (str[0] >= 'A' && str[0] <= 'Z')
		return (1);
	return (0);
}

static void	test_count_if_is_capitalized(void)
{
	char	*test[] = {"Truman", "Test", "bola", 0};
	int		expected = 2;
	int		result = ft_count_if(test, is_capitalized);
	ASSERT_EXPR(result == expected);
}

int		test_ft_count_if(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_count_if_is_capitalized),
	};
	return RUN_GROUP(tests);
}
