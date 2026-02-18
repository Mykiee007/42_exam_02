
#include <unistd.h>


void ft_putchar(char c)
{
	write (1, &c, 1);
}
int ft_check_integer(char *argv)
{
    int i = 0;

    while (argv[i] != '\0')
    {
        if (argv[0] == '-')
		{
			return 0;
		}    
		if (!(argv[i] >= '0' && argv[i] <= '9'))
		{
			return 0;
		}
		i++;
    }
	return (1);
}

int is_prime(int n)
{
	int i = 2;
	int cnt = 0;
	if (n <= 1)
		return 0;
	if (n == 2 || n == 3 || n == 5)
		return 1;
	while (i * i <= n)
	{
		if (n % i == 0)
			cnt++;
		i++;
	}
	if (cnt >= 1)
		return 0;
	else
		return 1;
}

int ft_atoi(char *str)
{
	int result = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

void ft_putnum(int i)
{
	if (i >= 10)
		ft_putnum(i / 10);
	ft_putchar(i % 10 + '0');	
}

int main(int argc, char **argv)
{
	int i = 0; 
	int res = 0;
	if (argc != 2)
    {
        write(1,"0",1);
        write(1,"\n",1);
        return 0;
    }
	if((argv[1][0] == '0' && argv[1][1] == '\0') || argv[1][0] == '\0')
    {
        write(1,"0",1);
        write(1,"\n",1);
        return 0;
    }
	if (!ft_check_integer(argv[1]))
    {
        write(1,"0",1);
        write(1,"\n",1);
        return 0;
    }
	while(i <= ft_atoi(argv[1]))
	{

		if (is_prime(i))
			res = res + i;
		i++;
	}

	ft_putnum(res);
	ft_putchar('\n');
	return (0);
}