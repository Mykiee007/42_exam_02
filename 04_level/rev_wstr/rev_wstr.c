#include <unistd.h>

// 9:47 am - 10:02

int main(int argc, char **argv)
{
	int i;
	int j = 0;
	int first = 1;
	char *s;

	if (argc == 2)
	{
		s = argv[1];
		i = 0;
		while(s[i] != '\0')
			i++;
		i--;
		while(i >= 0)
		{
			while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
				i--;
			j = i;
			while(j >= 0 && (s[j] != ' ' && s[j] != '\t'))
				j--;
			if(!first)
				write(1," ", 1);
			write(1, &s[j+1], i-j);
			first = 0;
			i = j;
		}
	}
	write(1,"\n",1);
	return 0;
}
























/*
int main(int argc, char **argv)
{
	int i = 0;
	int j;
	char *s;
	int first = 0;

	if (argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
			i++;
		i--;
		while(i > 0)
		{
			while(i >= 0 && (s[i] == ' ' || s[i] == '\t'))
				i--;
			j = i;
			while(j >= 0 && (s[j] != ' ' && s[j] != '\t'))
				j--;
			if(first)
				write(1," ", 1);
			write(1,&s[j+1], i - j);
			first = 1;
			i = j;
		}
	}
	write(1,"\n",1);
	return 0;
}*/