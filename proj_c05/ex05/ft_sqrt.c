#include <stdio.h>

float ft_sqrt(int nb)
{
	float	i;

	i = 0;
	if (nb <= 0)
		return (0);
	while (i * i <= nb)
		i++;
	if (i * i == nb)
		return (i);
	else
	{
		i--;
		while(i * i < nb)
		{
			i = i + 0.1;
		}
		i = i - 0.1;
		while(i * i < nb)
			i = i + 0.000001;
	}
	return (i);


}

int	main(void)
{
	float num;
	num = ft_sqrt(30);
	printf("%f\n", num);
}
