#include <stdlib.h>

char	*ft_itoa(int nbr)
{
	long	n;
	int len;
	char *s;

	len = 0;
	n = nbr;
	while(n)
	{
		len++;
		n/=10;
	}
	if(nbr <= 0)
		len++;
	s = (char *)malloc((len + 1) * sizeof(char));
	if(!s)
		return (NULL);
	n = nbr;
	if(n < 0)
		n = -n;
	s[len] = '\0';
	len--;
	if(n == 0)
		s[len] = '0';
	while(n)
	{
		s[len] = n % 10 + '0';
		n /= 10;
		len--;
	}
	if(nbr < 0)
		s[len] = '-';
	return (s);
}

#include <stdio.h>

int main(int argc, char **argv)
{
	char *s;
	int n;

	if(argc == 2)
	{
		n = atoi(argv[1]);
		s = ft_itoa(n);
		printf("%s\n", s);
	}
	return 0;
}


/*#include <stdlib.h>
#include <stdio.h>

// need more practice in logic analysis
char *ft_itoa(int nbr)
{
	long n = nbr;
	int len = 0;
	char *s;

	while(n) {
		len++;
		n /= 10;
	}
	s = malloc((len+1) * sizeof(char));
	if (!s)
		return NULL;
	s[len] = '\0';
	n = nbr;
	if(n < 0)
		n = -n;
	if (n == 0)
		s[0] = 0;
	while(n)
	{
		s[--len] = n % 10 + '0';
		n /= 10;
	}
	if(nbr < 0)
		s[0] = '-';
	return s;
}
int main(void)
{
	int x;

	printf("give a number:");
	scanf("%d", &x);
	printf("here is the result: %s\n", ft_itoa(x));
	free(ft_itoa(x));
	return 0;
}*/