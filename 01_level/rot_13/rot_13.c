#include <unistd.h>

// 15min

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i = 0;
	char *s;

	
	if(argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
		{
			if(s[i] >= 'a' && s[i] <= 'm')
				ft_putchar(s[i] + 13);
			else if(s[i] >= 'n' && s[i] <= 'z')
				ft_putchar(s[i] - 13);
			else if(s[i] >= 'A' && s[i] <= 'M')
				ft_putchar(s[i] + 13);
			else if(s[i] >= 'N' && s[i] <= 'Z')
				ft_putchar(s[i] - 13);
			else
				ft_putchar(s[i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}