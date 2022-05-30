#include "helpers.h"
#include "../test-runner/test_runner.h"

int main(void)
{
	BEGIN();
	test_ft_print_alphabet();
	test_ft_print_numbers();
	test_ft_is_negative();
	test_ft_ft();
	test_ft_swap();
	test_ft_div_mod();
	test_ft_iterative_factorial();
	test_ft_recursive_factorial();
	test_ft_sqrt();
	test_ft_putstr();
	test_ft_strlen();
	test_ft_strcmp();
	test_ft_print_params();
	test_ft_sort_params();
	test_ft_strdup();
	test_ft_range();
	test_ft_abs();
	test_ft_point();
	test_ft_foreach();
	test_ft_count_if();
}
