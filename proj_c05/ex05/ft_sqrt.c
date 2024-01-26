#include <stdio.h>

int ft_sqrt(int nb)
{
	int	i;

	i = 0;
	while (i * i != nb)
	{
		i++;
	}
	return (i);

}

int	main(void)
{
	int num;
	num = ft_sqrt(25);
	printf("%d\n", num);
}
