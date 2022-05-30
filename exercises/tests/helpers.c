#include "helpers.h"

# define BUFSIZE 1000

char	g_buffer[BUFSIZE];
int		g_index = 0;

void	ft_putchar(char c)
{
	g_buffer[g_index++] = c;
}

void	clean_buf(void)
{
	int	i;

	i = 0;
	while (g_buffer[i] != '\0')
		g_buffer[i++] = 0;
}

char	*get_output(void)
{
	g_buffer[g_index] = '\0';
	g_index = 0;
	return (g_buffer);
}

int		int_arr_cmp(int array1[], int array2[], int len)
{
	int	n_bytes;

	n_bytes = len * sizeof(int);
	return (memcmp(array1, array2, n_bytes));
}

void	ft_putnbr(int nb)
{
	unsigned int	nbr;

	if (nb < 0)
	{
		ft_putchar('-');
		nbr = nb * -1;
	}
	else
		nbr = nb;
	if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
	}
	ft_putchar(nbr % 10 + '0');
}
