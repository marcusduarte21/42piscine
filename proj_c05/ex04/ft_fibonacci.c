#include <stdio.h>


int	ft_fibonacci(int index)
{
	if (index == 0)
		return (0);
	else if (index < 0)
		return (-1);
	else if (index == 1)
		return (1);
	else
		return ft_fibonacci(index - 1 ) + ft_fibonacci(index - 2);

}
int	main(void)
{
	int	num;
	num = ft_fibonacci(7);
	printf("%d\n",num);
	return (0);
}
