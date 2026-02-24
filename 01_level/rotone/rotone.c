#include <unistd.h>

// 10min

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	char *s;

	if (argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
		{
			if (s[i] == 'z')
				ft_putchar('a');
			else if (s[i] == 'Z')
				ft_putchar('A');
			else if (s[i] >= 'a' && s[i] <= 'y' || s[i] >= 'A' && s[i] <= 'Y')
				ft_putchar(s[i] + 1);
			else
				ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}