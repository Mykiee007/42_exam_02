//1:20pm - 1:28
#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;

	if(argc == 2)
	{
		char *s = argv[1];
		int repeat;

		while(s[i] != '\0')
		{
			if(s[i] >= 'a' && s[i] <= 'z')
				repeat = s[i] - 'a';
			else if(s[i] >= 'A' && s[i] <= 'Z')
				repeat = s[i] - 'A';
			else
				repeat = 0;
			while(repeat >= 0)
			{
					write(1,&s[i],1);
					repeat--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}

/*#include <unistd.h>

//14 min

int main(int argc, char **argv)
{
	int i = 0;
	int n;
	char *s;

	if(argc == 2)
	{
		s = argv[1];
		while(s[i] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				n = s[i] - 'a';
				while(n >= 0)
				{
					write(1,&s[i],1);
					n--;
				}
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				n = s[i] - 'A';
				while(n >= 0)
				{
					write(1,&s[i],1);
					n--;
				}
			}
			else 
				write(1,&s[i],1);
			i++;
		}	
	}
	write(1, "\n",1);
	return 0;
}
*/