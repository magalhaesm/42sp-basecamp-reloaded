#include "../tests/helpers.h"
#include "../test-runner/test_runner.h"

void	test_write_alphabet_to_stdout(void)
{
	char	*expected = "abcdefghijklmnopqrstuvwxyz"; // arrange
	ft_print_alphabet();                              // act
	char	*result = get_output();
	ASSERT_EXPR(strcmp(result, expected) == 0);       // assert
}

int	test_ft_print_alphabet(void)
{
	t_unit_test tests[] = {
		UNIT_TEST(test_write_alphabet_to_stdout),
	};
	return RUN_GROUP(tests);
}
