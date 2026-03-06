#include <unistd.h>

void ft_putnum(int n)
{
	char c;
	long int nbr = n;

	if(nbr >= 10)
		ft_putnum(nbr / 10);
	c = nbr % 10 + '0';
	write(1,&c,1);
}

int ft_atoi(char *s)
{
	int result = 0;
	int i = 0;

	while(s[i]>= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	return result;
}

int	main(int argc, char **argv)
{
	int i;
	int n;
	int result;

	if(argc == 2)
	{
		i = 1;
		n = ft_atoi(argv[1]);
		while(i <= 9)
		{
			ft_putnum(i);
			write(1, " x ", 3);
			ft_putnum(n);
			write(1, " = ", 3);
			result = i * n;
			ft_putnum(result);
			write(1,"\n",1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}