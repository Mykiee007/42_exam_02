
#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	char *s;

	if(argc == 2)
	{
		i = 0;
		s = argv[1];

		while(s[i])
		{
			if(s[i] >= 'a' && s[i]<= 'm')
				s[i] = 'z' - (s[i] - 'a');
			else if (s[i] >= 'n' && s[i] <= 'z')
				s[i] = 'a' - (s[i] - 'z');
			else if (s[i] >= 'A' && s[i]<= 'M')
				s[i] = 'Z' - (s[i] - 'A');
			else if (s[i] >= 'N' && s[i]<= 'Z')
				s[i] = 'A' - (s[i] - 'Z');
			write(1, &s[i],1);
			i++;
		}
	}
	write(1,"\n", 1);
	return 0;
}

/*#include <unistd.h>

//10:43am - 10:54am

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
		while (s[i] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'm')
				ft_putchar('z' - (s[i] - 'a'));
			else if (s[i] >= 'n' && s[i] <= 'z')
				ft_putchar('a' - (s[i] - 'z'));
			else if (s[i] >= 'A' && s[i] <= 'M')
				ft_putchar('Z' - (s[i] - 'A'));
			else if (s[i] >= 'N' && s[i] <= 'Z')
				ft_putchar('A' - (s[i] - 'Z'));
			else
				ft_putchar(s[i]);
			i++;
		}
	}
	ft_putchar('\n');
	return 0;
}*/