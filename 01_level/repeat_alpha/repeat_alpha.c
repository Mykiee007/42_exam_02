
#include <unistd.h>
//needs to be more careful with conditions and limits
int main(int argc, char **argv)
{
	int i = 0;
	char *s;
	int r;

	if(argc == 2)
	{
		s = argv[1];
		while(s[i])
		{
			if(s[i] >= 'a' && s[i] <= 'z')
			{
				r = s[i] - 'a';
				while(r >= 0)
				{
					write(1,&s[i],1);
					r--;
				}
			}
			else if(s[i] >= 'A' && s[i] <= 'Z')
			{
				r = s[i] - 'A';
				while(r >= 0)
				{
					write(1,&s[i],1);
					r--;
				}
			}
			else
				write(1,&s[i],1);
			i++;
		}
	}
	write(1,"\n",1);
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
}*/
