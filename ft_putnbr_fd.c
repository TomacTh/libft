#include "./includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int num;

	num = n;
	if(n < 0)
	{	
		ft_putchar_fd('-', fd);
		num = n * -1;
	}
	if(num >= 10)
		ft_putnbr_fd(num/10, fd);
	ft_putchar_fd('0' + num % 10, fd);
}
