#include <unistd.h>

// 2min

int main(int argc, char **argv)
{
	char *s;
	int i = 0;

	if (argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{
			write(1,&s[i],1);
			i--;
		}
	}
	write(1,"\n",1);
	return 0;
}