#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	s[i] = '\0';
}

char *ft_rot13(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'M') 
			str[i] = str[i] + 13;
		else if (str[i] >= 'a' && str[i] <= 'm')
			str[i] = str[i] + 13;
		else if (str[i] >= 'N' && str[i] <= 'Z')
			str[i] = str[i] - 13 ;
		else if (str[i] >= 'n' && str[i] <= 'z')
			str[i] = str[i] - 13;
		i++;
	}
	return (str);
}

int main(int argc, char **argv)
{
	char *s;
	
	if (argc != 2)
	{
		ft_putchar('\n');
		return 0;
	}
	s = argv[1];
	ft_putstr(ft_rot13(s));
	ft_putchar('\n');
	return 0;
}
