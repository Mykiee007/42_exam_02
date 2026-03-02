
#include <unistd.h>

// 8:40pm 9:02


void ft_putchar(char c)
{
	write(1,&c,1);
}

int ft_atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;

	if(s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while(s[i] != '\0')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}
	
	return (result*sign);
}

int ft_isprime(unsigned int n)
{
	int i = 2;

	if(n == 1 || n <= 0)
		return 0;
	while (i * i <= n)
	{
		if(n % i == 0)
			return 0;
		i++;
	}
	return 1;
}

void ft_putnum(int n)
{
	if(n >= 10)
		ft_putnum(n/10);
	ft_putchar(n % 10 + '0');
}

#include <stdio.h>

int main(int argc, char **argv)
{
	int n;
	int i;
	int sum = 0;
	if(argc == 2)
	{
		n = ft_atoi(argv[1]);
		if (n == 1)
		{
			write(1,"0\n",2);
			return 0;
		}
		i = 2;
		while(i <= n)
		{
			if( ft_isprime(i))
			{
				sum = sum + i;
			}
			i++;
		}
		ft_putnum(sum);
		ft_putchar('\n');
	}
	else 
		write(1,"0\n",2);
	return 0;
}