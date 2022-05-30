#ifndef HELPERS_H
# define HELPERS_H

# define SIZEOF_ARRAY(arr) (sizeof(arr)/sizeof(arr[0]))

#include <string.h>

#include "../test-runner/test_runner.h"
#include "../ex06/ft_print_alphabet.h"
#include "../ex07/ft_print_numbers.h"
#include "../ex08/ft_is_negative.h"
#include "../ex09/ft_ft.h"
#include "../ex10/ft_swap.h"
#include "../ex11/ft_div_mod.h"
#include "../ex12/ft_iterative_factorial.h"
#include "../ex13/ft_recursive_factorial.h"
#include "../ex14/ft_sqrt.h"
#include "../ex15/ft_putstr.h"
#include "../ex16/ft_strlen.h"
#include "../ex17/ft_strcmp.h"
#include "../ex18/ft_print_params.h"
#include "../ex19/ft_sort_params.h"
#include "../ex20/ft_strdup.h"
#include "../ex21/ft_range.h"

#include "../ex22/ft_abs.h"
#include "../ex22/test_ft_abs.h"

#include "../ex23/ft_point.h"
#include "../ex23/test_ft_point.h"

#include "../ex25/ft_foreach.h"
#include "../ex26/ft_count_if.h"

void	clean_buf(void);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
char	*get_output(void);
int		int_arr_cmp(int array1[], int array2[], int len);

#endif
