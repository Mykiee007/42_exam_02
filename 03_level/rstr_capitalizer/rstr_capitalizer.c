#include <unistd.h>

int		is_space(char c)
{
	if(c == ' ' || c == '\t')
		return 1;
	else
		return 0;
}
int		is_alpha(char c)
{
	if (c >= 'a' && c <= 'z')
		return 1;
	else if (c >= 'A' && c <= 'Z')
		return 1;
	else
		return 0;
}

int		main(int argc, char **argv)
{
	int count;
	int i;
	char *s;

	if(argc > 1)
	{
		count = 1;
		while(count < argc)
		{
			s = argv[count];
			i = 0;

			while(s[i])
			{
				if (is_alpha(s[i]) && (!s[i + 1] || is_space(s[i + 1])))
				{
					if (s[i] >= 'a' && s[i] <= 'z')
						s[i] = s[i] - 32;
				}
				else if (is_alpha(s[i]) && !is_space(s[i + 1]))
				{
					if (s[i] >= 'A' && s[i] <= 'Z')
						s[i] = s[i] + 32;
				}
				write(1, &s[i], 1);
				i++;
			}
			write(1, "\n", 1);
			count++;
		}
	}
	else
		write(1, "\n", 1);
	return 0;
}