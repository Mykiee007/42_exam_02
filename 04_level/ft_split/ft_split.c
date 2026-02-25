#include <stdlib.h>
#include <stdio.h>
// 3:07pm stop at 3:26, start again at 4:03pm ~ 4:30pm
static int ft_countword(char *s)
{
	int i = 0;
	int count = 0;

	if(s[i] == '\0')
		return 0;
	while(s[i] != '\0')
	{
		while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 &&s[i]<= 13)))
			i++;
		if(s[i] != '\0' && (s[i] != ' ' && !(s[i] >= 9 &&s[i]<= 13)))
			count++;
		while(s[i] != '\0' && (s[i] != ' ' && !(s[i] >= 9 &&s[i]<= 13)))
			i++;
	}
	return (count);
}

char **ft_split(char *str)
{
	int i = 0;
	int j;
	int wordlen = 0;
	int count = 0;
	int word_count = ft_countword(str);
	char **arr;
	char *s;
	s = str;

	arr = (char **)malloc((word_count +1)* sizeof(char *));
	if (!arr)
		return NULL;
	arr[word_count] = NULL;

	while(s[i] != '\0' && count < word_count)
	{
		j = 0;
		while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 &&s[i]<= 13)))
			i++;
		j=i;
		while(s[j] != '\0' && (s[j] != ' ' && !(s[j] >= 9 &&s[j]<= 13)))
			j++;
		wordlen = j - i;
		arr[count] = (char *)malloc(sizeof(char)*(wordlen + 1));
		if (!arr[count])
			return NULL;
		j = 0;
		while(wordlen > 0 )
		{
			arr[count][j++] = s[i++];
			wordlen--; 
		}
		arr[count][j] = '\0';
		count++;
	}
	return (arr);
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
		printf("%s\n",split[i]);
		i++;
	}
	return 0;
}