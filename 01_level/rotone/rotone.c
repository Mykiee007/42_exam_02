#include <unistd.h>

//9:31 am - 9:40 am

int main(int argc, char **argv)
{
	int i = 0;
	char *s;

	if(argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
		{
			if(s[i] == 'z')
				s[i] = 'a';
			else if(s[i] == 'Z')
				s[i] = 'A';
			else if(s[i] >= 'a' && s[i] <= 'z' || (s[i] >= 'A' && s[i] <= 'Z'))
				s[i] = s[i] + 1;
			write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
	return 0;
}
