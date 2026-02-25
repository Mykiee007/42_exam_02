#include <stdlib.h>
#include <stdio.h>
// 3:07pm stop at 3:26
static int ft_countword(char *s)
{
	int i = 0;
	int count = 0;

	if(s[i] == '\0')
		return 0;
	while(s[i] != '\0')
	{
		while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 8 &&s[i]<= 13)))
			i++;
		if(s[i] != '\0' && (s[i] != ' ' && !(s[i] >= 8 &&s[i]<= 13)))
			count++;
		while(s[i] != '\0' && (s[i] != ' ' && !(s[i] >= 8 &&s[i]<= 13)))
			i++;
	}
	return (count);
}

char **ft_split(char *str)
{
	int word_count = ft_countword(str);
	char **arr;

	arr = (char *)malloc(word_count +1,)


}

int main(void){
	char *s = " hello world how    do youu  12312 12l/,.// 123 1/. 31 /> 31  ";
	char **split;
	int count = ft_countword(s);

	printf("total words are:%d", count);

	split = ft_split(s);
	int i = 0;
	while(split[i] != NULL)
	{
		printf("%s",split[i]);
		i++;
	}
	return 0;
}