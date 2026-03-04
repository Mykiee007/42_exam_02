#include <unistd.h>

int is_alpha(char i)
{
	if((i >= 'a' && i <= 'z') || (i >= 'A' && i <= 'Z'))
		return 1;
	else
		return 0;
}

int is_lower(char i)
{
	if(i >= 'a' && i <= 'z')
		return 1;
	else
		return 0;
}

int is_upper(char i)
{
	if(i >= 'A' && i <= 'Z')
		return 1;
	else
		return 0;
}

int main(int argc, char **argv)
{
	int arr_n;

	if (argc >= 2)
	{
		arr_n = 1; 
		while(arr_n < argc)
		{
			char *s = argv[arr_n];
			int i = 0;
			int space = 1;
			while(s[i] != '\0')
			{
				if(s[i] == ' ' || s[i] == '\t')
					space = 1;
				else
				{
					if(is_alpha(s[i]) && space && is_lower(s[i]))
						s[i] = s[i] - 32;
					else if (is_alpha(s[i]) && !space && is_upper(s[i]))
						s[i] = s[i] + 32;
					space = 0;
				}
				write(1, &s[i], 1);
				i++;
			}
			write(1, "\n",1);
			arr_n++;
		}
	}
	else
		write(1,"\n",1);
	return 0;
}