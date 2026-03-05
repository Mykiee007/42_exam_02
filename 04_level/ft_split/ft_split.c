#include <stdlib.h>


void ft_free_split(char **s)
{
	int i = 0;
	if(!s)
		return;
	while(s[i])
	{
		free(s[i]);
		i++;
	}
	free(s);
}

int is_delimiter(char c)
{
	if(c == ' ' || c == '\t' || c == '\n')
		return 1;
	else
		return 0;
}

int		ft_wordcount(char *s)
{
	int i = 0;
	int count = 0;

	while(s[i])
	{
		while(s[i] && is_delimiter(s[i]))
			i++;
		if(s[i] && !is_delimiter(s[i]))
			count++;
		while(s[i] && !is_delimiter(s[i]))
			i++;
	}
	return count;
}

char	**ft_split(char *str)
{
	if (!str)
   		return NULL;

	char *s = str;
	int word = ft_wordcount(s);


	char **arr = malloc((word + 1) * sizeof(char *));
	if(!arr)
		return NULL;

	int i = 0;
	int w = 0;
	while(w < word)
	{
		while(s[i] && is_delimiter(s[i]))
			i++;
		int j = i;
		while(s[j] && !is_delimiter(s[j]))
			j++;
		int len = j - i;
		arr[w] = (char *)malloc((len + 1) * sizeof(char));
		if(!arr[w]){
			ft_free_split(arr);
			return NULL;
		}
		int k = 0;
		while(i < j)
		{
			arr[w][k] = s[i];
			i++;
			k++;
		}
		arr[w][k] = '\0';
		w++;
		i = j;
	}
	arr[word] = NULL;
	return arr;
}

#include <stdio.h>

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
		char *s = argv[1];
		int count = ft_wordcount(s);
		printf("numnber of words: %d\n",count);
		char **arr = ft_split(s);
		int i = 0;
		while(arr && arr[i])
		{
			printf("%s\n", arr[i]);
			i++;
		}
			ft_free_split(arr);
	}
	printf("\n");

	return 0;
}


/*#include <stdlib.h>
//11:25am 12:03 pause resume 12:10 ~12:38 times up 12:44 with help

int count_word(char *str)
{
	int i = 0;
	int count = 0;
	char *s = str;
	
	while(s[i] != '\0')
	{
		int j = 0;
		while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
			i++;
		j = i;
		if(s[j] != '\0' && (s[j] != ' ' && !(s[j] >= 9 && s[j] <= 13)))
			count++;
		while(s[j] != '\0' && (s[j] != ' ' && !(s[j] >= 9 && s[j] <= 13)))
			j++;
		i = j;
	}
	return count;
}

void ft_free_split(char **arr)
{
	int i = 0;
	while(arr[i] != NULL)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

char	**ft_split(char *str)
{
	int r = 0;
	int i = 0;
	int j = 0;
	int k;
	int len = 0;
	int word_count = count_word(str);
	int end = word_count;
	char *s = str;
	char **arr;
	

	arr = malloc((word_count + 1)*sizeof(char *));
	if (!arr)
		return NULL;
	
	
	while((word_count - 1) >= 0 && s[i] != '\0')
	{
		while(s[i] != '\0' && (s[i] == ' ' || (s[i] >= 9 && s[i] <= 13)))
			i++;
		j = i;
		while(s[j] != '\0' && (s[j] != ' ' && !(s[j] >= 9 && s[j] <= 13)))
			j++;
		// "here  there"
		len = j - i + 1;
		arr[r] = (char *)malloc((len) * sizeof(char));
		if(!arr[r])
		{
			ft_free_split(arr);
			return NULL;
		}
		k = 0;
		while(i<j)
		{
			arr[r][k] = s[i];
			i++;
			k++;
		}
		arr[r][k] = '\0';
		r++;
		word_count--;
	}
	arr[end] = NULL;
	return (arr);
}



int main(int argc, char **argv)
{
	int i = 0;
	char **arr;
	if (argc == 2)
	{
		printf("%d\n", count_word(argv[1]));
		arr = ft_split(argv[1]);
		if(!arr)
		{
			printf("split prob\n");
			ft_free_split(arr);
			return 0;
		}
		while(arr[i])
		{
			printf("%s\n",arr[i]);
			i++;
		}
		printf("this should be null: %s\n",arr[i]);
	}
	ft_free_split(arr);
	return 0;
}*/
/*
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
}*/